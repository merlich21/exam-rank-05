/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aspell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:05:28 by merlich           #+#    #+#             */
/*   Updated: 2022/11/09 22:58:02 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class	ASpell
{
	public:

		ASpell( void );
		ASpell( ASpell const & obj );
		ASpell( std::string name, std::string effects );
		virtual ~ASpell( void );

		ASpell &	operator=( ASpell const & rhs );

		std::string	getName( void ) const;
		std::string	getEffects( void ) const;

		virtual ASpell	*clone( void ) = 0;
		void	launch( ATarget const & target );

	protected:

		std::string	_name;
		std::string	_effects;
	
};

#endif
