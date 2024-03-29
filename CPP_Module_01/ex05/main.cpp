/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:39:40 by aulicna           #+#    #+#             */
/*   Updated: 2024/02/01 12:54:21 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
#include <iostream>

bool	chooseComplains(Harl harl)
{
	std::string	inputLevel;
	std::cout << "___Harl's complains that you asked for (5 inputs)___\n";
	for (int i = 0; i < 6; i++)
	{
		std::cout << "Enter a level: ";
		std::getline(std::cin, inputLevel);
		if(std::cin.eof() == 1)
		{
			std::cerr << "\nError: Premature termination of complaining."
				<< std::endl;
			return(EXIT_FAILURE);
		}
		harl.complain(inputLevel);
	}
	return (EXIT_SUCCESS);
}

int	main(void)
{
	Harl		harl;
	std::string	levels1[] = {"DEBUG", "INFO", "WARNING", "ERROR", "INVALID"};
	std::string	levels2[] = {"debug", "info", "Warning", "eRRor", "Haha"};

	std::cout << "___Harl's complains by LEVEL (all uppercase)___\n";
	for (int i = 0; i < 5; i++)
	{
		harl.complain(levels1[i]);
	}
	std::cout << "___Harl's complains by level (lower and uppercase)___\n";
	for (int i = 0; i < 5; i++)
	{
		harl.complain(levels2[i]);
	}
	if (chooseComplains(harl))
		return(EXIT_FAILURE);
	std::cout << "Exit: Enough complaining for today." << std::endl;
	return (EXIT_SUCCESS);
}
