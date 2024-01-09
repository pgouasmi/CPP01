/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:43:12 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/09 12:14:33 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

void	Harl::complain( std::string level )
{
	if (this->map[level])
		(this->*map[level])();
	else
		std::cout << "No function corresponding to \"" << level << "\"" << std::endl;
}

Harl::Harl()
{
	map["DEBUG"] = &Harl::debug;
	map["INFO"] = &Harl::info;
	map["WARNING"] = &Harl::warning;
	map["ERROR"] = &Harl::error;
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl() {}

