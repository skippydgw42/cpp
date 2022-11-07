/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:01:13 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/11/03 16:02:23 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <istream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook {
public:

	PhoneBook(void);
	~PhoneBook(void);	
	
	void	ft_add(int i);
	void	ft_search(int i);
	void	ft_full(void);
private:
	Contact	_contact[8];
};

void	PhoneBook::ft_add(int i) {
	this->_contact[i].ft_set();
	return;
}

void	PhoneBook::ft_search(int i){
	this->_contact[i - 1].ft_get(i);
}

void	PhoneBook::ft_full(void) {
	int	i = 0;

	while (i < 7) {
		this->_contact[i] = this->_contact[i + 1];
		i++;
	}
}

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

#endif