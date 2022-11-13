/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:08:47 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 20:15:41 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball( void ) : ASpell( "Fireball", "burnt to a crisp" )
{
	// std::cout << "Fireball default constructor called" << std::endl;
}

Fireball::~Fireball( void )
{
	// std::cout << "Fireball destructor called" << std::endl;
}

ASpell	*Fireball::clone( void )
{
	return (new Fireball());
}
