/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:05:37 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 20:00:02 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell( void ) : _name("default"), _effects("effects")
{
	// std::cout << "ASpell default constructor called" << std::endl;
}

ASpell::ASpell( std::string name, std::string effects ) : _name(name), _effects(effects)
{
	// std::cout << "ASpell custom constructor called" << std::endl;
}

ASpell::ASpell( ASpell const & obj )
{
	// std::cout << "ASpell copy constructor called" << std::endl;
	*this = obj;
}

ASpell::~ASpell( void )
{
	// std::cout << "ASpell destructor called" << std::endl;
}

ASpell &	ASpell::operator=( ASpell const & rhs )
{
	this->_name = rhs._name;
	this->_effects = rhs._name;
	return (*this);
}

std::string	ASpell::getName( void ) const
{
	return (this->_name);
}

std::string	ASpell::getEffects( void ) const
{
	return (this->_effects);
}

void	ASpell::launch( ATarget const & target )
{
	target.getHitBySpell( *this );
}
