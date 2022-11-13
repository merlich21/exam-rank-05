/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:05:50 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 19:59:53 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget( void ) : _type("default")
{
	// std::cout << "ATarget default constructor called" << std::endl;
}

ATarget::ATarget( ATarget const & obj )
{
	// std::cout << "ATarget copy constructor called" << std::endl;
	*this = obj;
}

ATarget::ATarget( std::string type ) : _type(type)
{
	// std::cout << "ATarget custom constructor called" << std::endl;
}

ATarget::~ATarget( void )
{
	// std::cout << "ATarget destructor called" << std::endl;
}

ATarget	& ATarget::operator=( ATarget const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const &	ATarget::getType( void ) const
{
	return (this->_type);
}

void	ATarget::getHitBySpell( ASpell const & spell ) const
{
	std::cout << this->_type << "has been " << spell.getEffects() << std::endl;
}
