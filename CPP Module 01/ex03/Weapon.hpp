/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:48:56 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 20:02:13 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon{

private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string&	getType();
	void			setType(std::string type);
};

#endif