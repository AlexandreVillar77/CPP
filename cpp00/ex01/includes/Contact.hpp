/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:28:50 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 11:03:45 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>
# include <string>
# include <stdlib.h>

class Contact
{
private:
	int			index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phone;
	std::string dark;

public:
	Contact();
	~Contact();

	void	setIndex(int i);
	void	setFirstName(std::string first);
	void	setLastName(std::string first);
	void	setNickName(std::string first);
	void	setPhone(std::string first);
	void	setDark(std::string first);

	int			getIndex();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhone();
	std::string	getDark();
};

#endif