/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:54:30 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 20:17:43 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
	std::cout << "Weapon " << this->_type << " created" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon " << this->getType() << " destroyed" << std::endl;
}

std::string&	Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
	std::cout << "Reassigned type to " << type << std::endl;
}