/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:06:21 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 19:59:42 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ) : ASpell( "Fwoosh", "fwooshed" )
{
	// std::cout << "Fwoosh default constructor called" << std::endl;
}

Fwoosh::~Fwoosh( void )
{
	// std::cout << "Fwoosh destructor called" << std::endl;
}

ASpell	*Fwoosh::clone( void )
{
	return (new Fwoosh());
}
