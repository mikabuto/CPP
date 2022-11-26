/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:51:08 by mikabuto          #+#    #+#             */
/*   Updated: 2022/11/26 13:59:29 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact{

private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact(void);
	~Contact(void);
	
	std::string GetFirstname();
	std::string GetLastname();
	std::string GetNickname();
	std::string GetNumber();
	std::string GetSecret();
	void		SetContact(std::string *data);

};

#endif