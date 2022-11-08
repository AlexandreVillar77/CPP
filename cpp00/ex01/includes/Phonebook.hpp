/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:24:44 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 14:19:54 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include "Contact.hpp"

class Phonebook
{
private:
	Contact contact[8];
	int		count;

public:
	Phonebook();
	~Phonebook();

	int		getCount();
	void	createContact(std::string first, std::string last,
				std::string nick, std::string phone, std::string dark);
	void	printAllContact();
	void	printThis(int id);
};

#endif