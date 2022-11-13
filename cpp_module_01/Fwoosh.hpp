/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:06:11 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 19:57:06 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class	Fwoosh : public ASpell
{
	public:

		Fwoosh( void );
		~Fwoosh( void );

		virtual ASpell	*clone( void );
	
};

#endif
