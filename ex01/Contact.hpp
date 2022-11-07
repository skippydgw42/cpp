/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:30:06 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/11/07 11:22:59 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <iostream>
#include <string>

class	Contact {
public:
	Contact(void);
	~Contact(void);

	void		ft_get(int index);
	void		ft_printten(std::string str);
	void		ft_set();
	std::string	ft_fullstr(std::string msg);
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phonenumber;
	std::string	_secret;
	int			set;
};

Contact::Contact(void) {
	return;
};

Contact::~Contact(void) {
	return;
};

std::string	Contact::ft_fullstr(std::string msg) {
	std::string	str = "";

	std::cin.ignore();
	while (str.empty() && !std::cin.eof()) {
		std::cout << "IN" << std::endl;
		std::cout << msg;
		// std::cin >> str;
		std::getline(std::cin, str);
		if (!str.empty())
			return (str);
	}
	return (str);
}

void	Contact::ft_set() {
	std::cout << ">>>>INFOS<<<<" << std::endl;
	this->_firstname = this->ft_fullstr("First Name: ");
	std::cout << "OUT" << std::endl;
	this->_lastname = this->ft_fullstr("Last Name: ");
	this->_nickname = this->ft_fullstr("Nick Name: ");
	this->_phonenumber = this->ft_fullstr("Phone Number: ");
	this->_secret = this->ft_fullstr("Dark Secret: ");
	this->set = 1;
}

void	Contact::ft_get(int index) {
	if (this->set) {
		std::cout << index;
		std::cout << " | ";
		ft_printten(this->_firstname);
		std::cout << " | ";
		ft_printten(this->_lastname);
		std::cout << " | ";
		ft_printten(this->_nickname);
		std::cout << std::endl;
	}
	else
		std::cout << "Contact num " << index << " doesn't exist.." << std::endl;
}

void	Contact::ft_printten(std::string str) {
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << '.';
	else
		std::cout << str;
}

#endif