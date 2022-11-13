/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:35:33 by merlich           #+#    #+#             */
/*   Updated: 2022/11/09 20:56:16 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class	Warlock
{

	public:

		Warlock( void );
		Warlock( std::string const & name, std::string const & title );
		~Warlock( void );

		std::string const &	getName( void ) const;
		std::string const &	getTitle( void ) const;

		void	setTitle( std::string const & title );

		void	introduce( void ) const;

	private:

		std::string	_name;
		std::string	_title;

		Warlock( Warlock const & obj );
		Warlock const &	operator=( Warlock const & rhs );

};

#endif
