/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:18:30 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 20:19:00 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall( void ) : ATarget( "Inconspicuous Red-brick Wall" )
{
	// std::cout << "BrickWall default constructor called" << std::endl;
}

BrickWall::~BrickWall( void )
{
	// std::cout << "BrickWall destructor called" << std::endl;
}

ATarget	*BrickWall::clone( void )
{
	return (new BrickWall());
}
