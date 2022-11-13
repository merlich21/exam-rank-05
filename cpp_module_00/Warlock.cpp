/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:35:24 by merlich           #+#    #+#             */
/*   Updated: 2022/11/09 20:57:15 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( void ) : _name("default"), _title("default")
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock( std::string const & name, std::string const & title ) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

std::string const &	Warlock::getName( void ) const
{
	return (this->_name);
}

std::string const &	Warlock::getTitle( void ) const
{
	return (this->_title);
}

void	Warlock::setTitle( std::string const & title )
{
	this->_title = title;
}

void	Warlock::introduce( void ) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title<< "!" << std::endl;
}

Warlock::Warlock( Warlock const & obj )
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
	*this = obj;
}

Warlock const &	Warlock::operator=( Warlock const & rhs )
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

Warlock::~Warlock( void )
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

