/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:01:07 by aulicna           #+#    #+#             */
/*   Updated: 2024/03/27 21:38:52 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.class.hpp"

class Character : public ICharacter
{
public:
	// Default constructor
	Character(void);
	// Constructor overloads
	Character(std::string name);
	// Copy constructor
	Character(const Character& copy);
	// Copy assignment operator overload
	Character	&operator=(const Character &src);
	// Destructor
	~Character(void);

	// Getters
	std::string const	&getName() const;

	// Other member functions
	void equip(AMateria* m);
//	void unequip(int idx);
	void use(int idx, ICharacter& target);

	static void	sweepFloor();

private:
	std::string	_name;
	AMateria	*_inventory[4];

	static AMateria	*_floor[100];

};

#endif
