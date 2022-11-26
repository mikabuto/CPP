/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:16:31 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 14:33:14 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "phonebook.hpp"

int	main(void)
{
	std::string	cmd;
	std::string data[5];
	std::string str;
	Phonebook	book;

	std::cout << "Phone book" << std::endl;
	std::cout << "Available command: ADD, SEARCH, EXIT" << std::endl;
	while (true)
	{
		std::cout << "> ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			std::cout << "First name: ";
			std::cin >> data[0];
			std::cout << "Last name: ";
			std::cin >> data[1];
			std::cout << "Nick name: ";
			std::cin >> data[2];
			std::cout << "Phone number: ";
			std::cin >> data[3];
			std::cout << "Darkest secret: ";
			std::cin >> data[4];
			book.Add(data);
		}
		else if (cmd == "SEARCH")
		{
			book.Search();
			book.DisplayContact();
		}
		else if (cmd == "EXIT")
			exit(0);
		else
		{
			std::cout << "Undefined command: " << cmd << std::endl;
			std::cout << "Available command: ADD, SEARCH, EXIT" << std::endl;
		}
	}
}