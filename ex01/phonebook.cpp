/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:29:26 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/11/07 11:03:43 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.class.hpp"

void	ft_see_repertory(PhoneBook book) {
	int	i = 0;

	while (i < 8)
	{
		book.ft_search(i);
		i++;
	}
}

int	main(void) {
	int	i = 0;
	int	index = 0;
	PhoneBook	book;
	std::string	request;
	
	while (request != "EXIT" && !std::cin.eof()) {
		std::cout << "Do you want to ADD, SEARCH or EXIT? ";
		std::cin >> request;
		if (std::cin.eof())
			return (0);
		if (request == "ADD") {
			if (i == 8) {
				book.ft_full();
				book.ft_add(7);
				i = 0;
			}
			else
				book.ft_add(i);
			i++;
		}
		else if (request == "SEARCH") {
			while ((index < 1 || index > 8) && !std::cin.eof()) {
				std::cout << ">>>>CONTACT_INDEX<<<<" << std::endl;
				std::cin >> index;
				if (index < 1 || index > 8)
					std::cout << "You have between 1 and 8 contacts like in 2001" << std::endl;
			}
			book.ft_search(index);
			index = 0;
		}
	}
	return (0);
}