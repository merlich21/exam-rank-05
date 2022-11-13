/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:39:08 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 22:10:36 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void ) {}

TargetGenerator::TargetGenerator( TargetGenerator const & obj )
{
	*this = obj;
}

TargetGenerator const &	TargetGenerator::operator=( TargetGenerator const & rhs )
{
	this->_targets = rhs._targets;
	return (*this);
}

TargetGenerator::~TargetGenerator( void )
{
	std::map<std::string, ATarget *>::iterator it_begin = this->_targets.begin();
	std::map<std::string, ATarget *>::iterator it_end = this->_targets.end();

	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->_targets.clear();
}

void	TargetGenerator::learnTargetType( ATarget * target )
{
	this->_targets.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void	TargetGenerator::forgetTargetType( std::string const & name )
{
	std::map<std::string, ATarget *>::iterator	it;

	it = this->_targets.find(name);
	if (it != this->_targets.end())
	{
		delete it->second;
		this->_targets.erase(name);
	}
}

ATarget	*TargetGenerator::createTarget( std::string const & name )
{
	std::map<std::string, ATarget *>::iterator	it;

	it = this->_targets.find(name);
	if (it != this->_targets.end())
	{
		return _targets[name];
	}
	return NULL;
}
