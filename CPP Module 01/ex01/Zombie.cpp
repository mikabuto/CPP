/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:48:51 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 19:24:56 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Nameless zombie created" << std::endl;
}

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << "Zombie object " << this->_name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie object " << this->_name << " destroyed" << std::endl;
}

std::string Zombie::getName() {
	return this->_name;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::announce() {
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}