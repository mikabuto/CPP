/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:01:29 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 14:11:31 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

Phonebook::Phonebook(void) {
	count = 0;
}

Phonebook::~Phonebook(void) {
	;
}

void	Phonebook::Add(std::string *data) {
	if (this->count != 8){
		this->contact[this->count].SetContact(data);
		this->count++;
	}
	else{
		for (int i = 0; i < 7; i++){
			this->contact[i] = this->contact[i + 1];
		}
		this->contact[7].SetContact(data);
	}
}

void	printString(std::string str) {
	if (str.length() > 10)
		std::cout << "|" << str.substr(
			0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << str;
}

void	Phonebook::Search(void) {
	int	i;

	std::cout << SEARCH_HEADER << std::endl;
	if (this->count == 0)
	{
		std::cout << "Phone book is empty" << std::endl;
		return ;
	}
	i = 0;
	while (i < this->count)
	{
		std::cout << "|" << std::setw(10) << i;
		printString(this->contact[i].GetFirstname());
		printString(this->contact[i].GetLastname());
		printString(this->contact[i].GetNickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << SEARCH_FOOTER << std::endl;
}

void	Phonebook::DisplayContact(void) {
	int	i;

	if (this->count == 0)
		return ;
	std::cout << "index> ";
	if (std::cin >> i)
	{
		if ( i >= this->count || i < 0)
		{
		std::cout << "Index out of range!" << std::endl;
		return ;
		}
		std::cout << std::endl;
		std::cout << "First name:	"
			<< this->contact[i].GetFirstname() << std::endl;
		std::cout << "Last name:	"
			<< this->contact[i].GetLastname() << std::endl;
		std::cout << "Nickname:	"
			<< this->contact[i].GetNickname() << std::endl;
		std::cout << "Phone number:	"
			<< this->contact[i].GetNumber() << std::endl;
		std::cout << "Darkest secret:	"
			<< this->contact[i].GetSecret() << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Invalid index value entered!" << std::endl;
		std::cin.clear();
		std::cin.ignore();
	}
}