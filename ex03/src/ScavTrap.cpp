/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:48:19 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 16:46:12 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "> ScavTrap default ctor" << std::endl;
	_name = "No Name";
	_hp = 100;
	_ep = 50;
	_attack_dmg = 20;
}
ScavTrap::ScavTrap(std::string r_name) : ClapTrap(r_name)
{
	std::cout << "ScavTrap ctor with parameter" << std::endl;
	_name = r_name;
	_hp = 100;
	_ep = 50;
	_attack_dmg = 20;
}
ScavTrap::ScavTrap(ScavTrap &other)
{
	std::cout << "ScavTrap cpy ctor" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack_dmg = other._attack_dmg;
	}
}
ScavTrap& ScavTrap::operator=(ScavTrap &other)
{
	std::cout << "ScavTrap operator =" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack_dmg = other._attack_dmg;
	}
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout << "< " << _name << " > default dtor" << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << _name << " attacks "<< target << ", causing " << _attack_dmg << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap < "<< this->getName() << " > is now in Gate keeper mode." << std::endl;
}