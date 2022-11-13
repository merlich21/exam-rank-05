/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:33:34 by merlich           #+#    #+#             */
/*   Updated: 2022/11/11 21:49:45 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <map>
// #include "ASpell.hpp"
// #include "SpellBook.hpp"
#include "ATarget.hpp"

class	TargetGenerator
{

	public:

		TargetGenerator( void );
		~TargetGenerator( void );

		void	learnTargetType( ATarget * target );
		void	forgetTargetType( std::string const & name );
		ATarget	*createTarget( std::string const & name );

	private:

		std::map< std::string, ATarget * >	_targets;

		TargetGenerator( TargetGenerator const & obj );
		TargetGenerator const &	operator=( TargetGenerator const & rhs );

};

#endif
