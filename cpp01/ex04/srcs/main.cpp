/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:20:59 by avillar           #+#    #+#             */
/*   Updated: 2022/11/14 15:42:57 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::string &str, char *to_rep, char *rep_by)
{
	std::string to = to_rep;
	std::string by = rep_by;
	size_t	index = 0;
	while (1) 
	{
		index = str.find(to_rep, index);
		if (index == std::string::npos)
			break ;
		str.erase(index, to.length());
		str.insert(index, by);
		index += by.length();
	}
}

void	copy_file(std::ifstream &infile, std::ofstream &outfile, char *to_rep, char *rep_by)
{
	std::string test;

	std::getline(infile, test, '\0');
	replace(test, to_rep, rep_by);
	outfile.write(test.c_str(), test.length());
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Use case : \n<filename> <to_replace> <replace_by>" << std::endl;
		return (1);
	}
	std::ifstream infile;
	std::ofstream outfile;
	std::string out = argv[1];
	out.append(".replace");
	outfile.open(out.c_str(), std::ofstream::out | std::ofstream::trunc);
	infile.open(argv[1], std::ifstream::in);
	if (infile.fail() || infile.bad())
	{
		std::cout << "Error while opening/reading " << argv[1] << " try again" << std::endl;
		return (1);
	}
	if (outfile.fail() || outfile.bad())
	{
		std::cout << "Error while opening/writing " << argv[1] << ".replace try again" << std::endl;
		return (1);
	}
	copy_file(infile, outfile, argv[2], argv[3]);
	outfile.close();
	infile.close();
	return (0);
}