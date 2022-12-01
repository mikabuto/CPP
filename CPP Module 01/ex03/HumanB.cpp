/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:13:56 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 20:19:55 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL)
{
	std::cout << "HumanB " << name << " created" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
	std::cout << "HumanB " << this->_name << " takes " << this->_weapon->getType() << std::endl;
}

void	HumanB::attack() {
	if (this->_weapon) {
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << "doesn't have any weapon :(" << std::endl;
	}
}