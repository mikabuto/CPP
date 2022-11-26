/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:01:26 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 14:01:27 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
# define PHONEBOOK

# include "contact.hpp"
# include <iostream>
# define SEARCH_HEADER "\
---------------------------------------------\n\
|     Index|First name| Last name|  Nickname|\n\
---------------------------------------------"
# define SEARCH_FOOTER "\
---------------------------------------------\n"


class Phonebook{

private:

	Contact contact[8];
	int		count;

public:

	Phonebook(void);
	~Phonebook(void);

	void	Add(std::string *data);
	void	Search(void);
	void	DisplayContact(void);
};

#endif