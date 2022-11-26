/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:57:02 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 19:32:39 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int len = 10;
	Zombie *zombies = zombieHorde(len, "Shon");
	for (int i = 0; i < len; i++)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}