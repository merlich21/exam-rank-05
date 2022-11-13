/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:35:33 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 19:57:11 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class	Warlock
{

	public:

		Warlock( void );
		Warlock( std::string const & name, std::string const & title );
		~Warlock( void );

		std::string const &	getName( void ) const;
		std::string const &	getTitle( void ) const;

		void	setTitle( std::string const & title );

		void	introduce( void ) const;
		void	learnSpell( ASpell * spell );
		void	forgetSpell( std::string name );
		void	launchSpell( std::string name, ATarget const & target );

	private:

		std::string	_name;
		std::string	_title;

		std::map< std::string, ASpell * >	_spells;

		Warlock( Warlock const & obj );
		Warlock const &	operator=( Warlock const & rhs );

};

#endif
