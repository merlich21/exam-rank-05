/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:20:23 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 21:06:22 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class	SpellBook
{

	public:

		SpellBook( void );
		~SpellBook( void );

		void	learnSpell( ASpell * spell );
		void	forgetSpell( std::string const & name );
		ASpell	*createSpell( std::string const & name );

	private:

		std::map< std::string, ASpell * >	_spells;

		SpellBook( SpellBook const & obj );
		SpellBook const &	operator=( SpellBook const & rhs );

};

#endif
