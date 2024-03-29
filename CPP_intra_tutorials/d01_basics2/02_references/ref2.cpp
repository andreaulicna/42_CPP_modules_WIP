/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:34:44 by aulicna           #+#    #+#             */
/*   Updated: 2024/01/12 18:13:03 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	byPtr(std::string* str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string& str)
{
	str += " and ponies";
}

void	byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}

int	main()
{
	std::string str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}