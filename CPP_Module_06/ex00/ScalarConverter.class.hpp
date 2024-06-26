/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:22:12 by aulicna           #+#    #+#             */
/*   Updated: 2024/04/20 20:01:06 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_HPP
# define SCALARCONVERTER_CLASS_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <cstdlib>
# include <limits>
# include <cctype>
# include <iomanip>
# include <cerrno>


enum	Type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	WRONG
};

struct Scalars
{
	unsigned char	c;
	int		i;
	float	f;
	double	d;
};


class ScalarConverter
{
	public:
		static void	convert(std::string literal);

	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter	&operator=(const ScalarConverter &src);
		~ScalarConverter(void);
};

#endif
