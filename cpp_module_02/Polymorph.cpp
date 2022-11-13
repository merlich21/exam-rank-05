/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:16:41 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 20:17:09 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph( void ) : ASpell( "Polymorph", "turned into a critter" )
{
	// std::cout << "Polymorph default constructor called" << std::endl;
}

Polymorph::~Polymorph( void )
{
	// std::cout << "Polymorph destructor called" << std::endl;
}

ASpell	*Polymorph::clone( void )
{
	return (new Polymorph());
}
