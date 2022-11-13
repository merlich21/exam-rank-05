/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:35:24 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 21:24:48 by merlich          ###   ########.fr       */
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
	std::map<std::string, ASpell *>::iterator	it;
	std::map<std::string, ASpell *>::iterator	it_end;

	it = this->_spells.begin();
	it_end = this->_spells.end();
	
	for (it; it != it_end; it++)
	{
		delete it->second;
	}
	this->_spells.clear();
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

void	Warlock::learnSpell( ASpell *spell )
{
	if (spell)
		_spells.insert(std::pair< std::string, ASpell * >( spell->getName(), spell->clone() ));
}

void	Warlock::forgetSpell( std::string name )
{
	std::map<std::string, ASpell *>::iterator	it;
	
	it = this->_spells.find( name );
	if (it != this->_spells.end())
	{
		delete it->second;
		this->_spells.erase(name);
	}
}

void	Warlock::launchSpell( std::string name, ATarget const & target )
{
	std::map<std::string, ASpell *>::iterator	it;

	it = this->_spells.find(name);
	if (it != this->_spells.end())
		it->second->launch(target);
}
