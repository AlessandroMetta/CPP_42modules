/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:02:11 by ametta            #+#    #+#             */
/*   Updated: 2021/10/27 13:02:14 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen () {}

Karen::~Karen () {}

void Karen::debug ( void )
{
	std::cout << "[ DEBUG ] " << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void Karen::info ( void )
{
	std::cout << "[ INFO ] " << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t";
	std::cout << " put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning ( void )
{
	std::cout << "[ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << " coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Karen::error ( void )
{
	std::cout << "[ ERROR ] " << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void Karen::filter (std::string level)
{
	int i = -1; 
	std::string str_option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
	while (++i < 4)
	{
		if (str_option[i] == level)
			break ;
	}
	switch (i)
	{
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				 break;
		case 0: this->debug();
		case 1: this->info();
		case 2: this->warning();
		case 3: this->error();
	}
}
