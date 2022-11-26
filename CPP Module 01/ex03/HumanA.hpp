/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:48:56 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 20:13:06 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA{

private:
	std::string	_name;
	Weapon		&_weapon;

public:
	HumanA( std::string name, Weapon &weapon );
	~HumanA(void);

	void	attack(void);
};

#endif