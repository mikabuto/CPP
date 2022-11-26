/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:48:56 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 20:13:01 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB{

private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB( std::string name );
	~HumanB(void);

	void	attack(void);
	void	setWeapon( Weapon &weapon );
};

#endif