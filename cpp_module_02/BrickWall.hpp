/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:17:46 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 20:18:20 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class	BrickWall : public ATarget
{
	public:

		BrickWall( void );
		~BrickWall( void );
	
		virtual ATarget	*clone( void );

};

#endif
