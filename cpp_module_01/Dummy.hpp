/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:06:31 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 19:55:42 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class	Dummy : public ATarget
{
	public:

		Dummy( void );
		~Dummy( void );
	
		virtual ATarget	*clone( void );

};

#endif
