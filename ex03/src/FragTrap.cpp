/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:48:19 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 16:45:49 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "> FragTrap default ctor" << std::endl;
	_name = "No Name";
	_hp = 100;
	_ep = 100;
	_attack_dmg = 30;
}
FragTrap::FragTrap(std::string r_name) : ClapTrap(r_name)
{
	std::cout << "FragTrap ctor with parameter" << std::endl;
	_name = r_name;
	_hp = 100;
	_ep = 100;
	_attack_dmg = 30;
}
FragTrap::FragTrap(FragTrap &other)
{
	std::cout << "FragTrap cpy ctor" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack_dmg = other._attack_dmg;
	}
}
FragTrap& FragTrap::operator=(FragTrap &other)
{
	std::cout << "FragTrap operator =" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack_dmg = other._attack_dmg;
	}
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap : < " << _name << " > default dtor" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap < " << this->getName() << " > give me high five :)" << std::endl; 
}
