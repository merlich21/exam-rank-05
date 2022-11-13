/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:33:00 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 22:12:26 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook( void ) {}

SpellBook::~SpellBook( void )
{
	std::map<std::string, ASpell *>::iterator it_begin = this->_spells.begin();
	std::map<std::string, ASpell *>::iterator it_end = this->_spells.end();

	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->_spells.clear();
}

SpellBook::SpellBook( SpellBook const & obj )
{
	*this = obj;
}

SpellBook const &	SpellBook::operator=( SpellBook const & rhs )
{
	this->_spells = rhs._spells;
	return *this;
}

void	SpellBook::learnSpell( ASpell * spell )
{
	this->_spells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void	SpellBook::forgetSpell( std::string const & name )
{
	std::map<std::string, ASpell *>::iterator	it;

	it = this->_spells.find(name);
	if (it != this->_spells.end())
	{
		delete it->second;
		this->_spells.erase(name);
	}
}

ASpell	*SpellBook::createSpell( std::string const & name )
{
	std::map<std::string, ASpell *>::iterator	it;

	it = this->_spells.find(name);
	if (it != this->_spells.end())
		return (this->_spells[name]);
	return (NULL);
}
