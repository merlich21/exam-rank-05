/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:06:40 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 19:59:47 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy( void ) : ATarget( "Target Practice Dummy" )
{
	// std::cout << "Dummy default constructor called" << std::endl;
}

Dummy::~Dummy( void )
{
	// std::cout << "Dummy destructor called" << std::endl;
}

ATarget	*Dummy::clone( void )
{
	return (new Dummy());
}
