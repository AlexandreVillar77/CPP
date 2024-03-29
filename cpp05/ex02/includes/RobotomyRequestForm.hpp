/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:58:27 by avillar           #+#    #+#             */
/*   Updated: 2023/01/12 15:49:24 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	/* data */
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);

	void action() const;

	RobotomyRequestForm & operator=(RobotomyRequestForm const & og);
	~RobotomyRequestForm();
};

#endif