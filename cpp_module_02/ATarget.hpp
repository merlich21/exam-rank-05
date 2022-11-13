/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:05:58 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 19:57:46 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class	ATarget
{
	public:

		ATarget( void );
		ATarget( std::string type );
		ATarget( ATarget const & obj );
		virtual ~ATarget( void );

		ATarget	& operator=( ATarget const & rhs);

		std::string const &	getType( void ) const;

		virtual ATarget	*clone( void ) = 0;
		void	getHitBySpell( ASpell const & spell ) const;

	protected:

		std::string	_type;
	
};

#endif
