/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:13:55 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 20:15:06 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class	Fireball : public ASpell
{
	public:

		Fireball( void );
		~Fireball( void );

		virtual ASpell	*clone( void );
	
};

#endif
