/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:15:55 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 20:16:29 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"

class	Polymorph : public ASpell
{
	public:

		Polymorph( void );
		~Polymorph( void );

		virtual ASpell	*clone( void );
	
};

#endif
