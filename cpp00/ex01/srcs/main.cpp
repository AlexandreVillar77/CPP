/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:24:24 by avillar           #+#    #+#             */
/*   Updated: 2022/11/08 12:02:49 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

/*
	HANDLE CTRL + D IN STDIN
*/

void    readLineSafe(std::string& str)
{
    bool    fail = false;

    do {
        std::cin >> str;
        if (std::cin.eof()) {
            if (std::cin.fail()) {
                fail = true;
            }
            std::cin.clear();
            if (fail) {
                std::cin.putback('\n');
            } else {
                std::cout << std::endl;
            }
        }
    } while (str.size() == 0);
}

/*
	CLEAN THE PROMPT
*/

void	clear()
{
	std::system("clear");
}

/*
	PRINT USE CASE
*/

void	command()
{
	std::string	cmd;
	std::cout << "\033[0;32mUse case:\n\n\033[0m";
	std::cout << "ADD : register a new contact\nSEARCH : print the chosen contact\nEXIT : exit the current session\n\n"; 
}

/*
	GET_INFO FOR ADD AND CREATE A NEW CONTACT
*/

void	get_info(Phonebook &repert)
{
	std::string str[5];
	std::cout << "\033[0;36mEnter first name : \033[0m";
	readLineSafe(str[0]);
	clear();
	std::cout << "\033[0;36mEnter last name : \033[0m";
	readLineSafe(str[1]);
	clear();
	std::cout << "\033[0;36mEnter nickname : \033[0m";
	readLineSafe(str[2]);
	clear();
	std::cout << "\033[0;36mEnter phone number : \033[0m";
	readLineSafe(str[3]);
	clear();
	std::cout << "\033[0;36mEnter your darkest secret : \033[0m";
	readLineSafe(str[4]);
	clear();
	repert.createContact(str[0], str[1], str[2], str[3], str[4]);
}

/*
	PARSE SELECTED ID WITH SEARCH
*/

int	parse_id(Phonebook repert)
{
	std::string	line;
	int			id;

	std::cout << "\n\033[0;33mSelect an id : \033[0m";
	readLineSafe(line);
	for (size_t i = 0; i < line.size(); i++)
	{
		if (line[i] < 49 || line[i] > 56)
		{
			std::cout << "\033[0;31mOnly num between 1 and 8 are accepted.\n\033[0m";
			return (parse_id(repert));
		}
	}
	id = std::atoi(line.c_str());
	if (id > repert.getCount() + 1)
	{
		std::cout << "\033[0;31mChoose a valid id.\n\033[0m";
		return (parse_id(repert));
	}
	if (id > 8 || id > repert.getCount() + 1 || id < 1)
	{
		std::cout << "\033[0;31menter an existing id\n\033[0m";
		return (parse_id(repert));
	}
	clear();
	return (id);
}

/*
	Manage CMDs
*/

void	manager(std::string cmd, Phonebook &repert)
{
	if (cmd.compare("ADD") == 0)
	{
		get_info(repert);
		return ;
	}
	else if (cmd.compare("SEARCH") == 0)
	{
		if (repert.getCount() > -1)
		{
			repert.printAllContact();
			repert.printThis(parse_id(repert));
		}
		else
			std::cout << "\033[0;31mNo contact registered try again.\n\033[0m";
		return ;
	}
	else if (cmd.compare("EXIT") == 0)
	{
		std::cout << "See you later.\n";
		exit (0);
	}
	else
	{
		command();
		std::cout << "\033[0;31mTry a valid command.\n\033[0m";
	}
}

int main()
{
	Phonebook repertoire;
	std::string opt;

	clear();
	command();
	while (1)
	{
		opt.clear();
		std::cout << "\033[0;33mEnter a command : \033[0m";
		readLineSafe(opt);
		clear();
		manager(opt, repertoire);
	}
	return (0);
}
