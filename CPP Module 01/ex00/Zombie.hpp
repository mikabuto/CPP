/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:38:47 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 19:12:53 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie{

private:
	std::string	_name;

public:
	Zombie(std::string name);
	~Zombie(void);

	std::string	getName();
	void		announce(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif