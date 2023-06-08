/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:42:11 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 21:35:31 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "> ClapTrap default ctor" << std::endl;
	_name = "No Name";
	_hp = 10;
	_ep = 10;
	_attack_dmg = 0;
}
ClapTrap::ClapTrap(std::string r_name)
{
	std::cout << "ClapTrap ctor with parameter" << std::endl;
	_name = r_name;
	_hp = 10;
	_ep = 10;
	_attack_dmg = 0;
}
ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "ClapTrap cpy ctor" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack_dmg = other._attack_dmg;
	}
}
ClapTrap& ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "ClapTrap operator =" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack_dmg = other._attack_dmg;
	}
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap < " << _name << " > default dtor" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << _name << " attacks "<< target << ", causing " << _attack_dmg << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	
	std::cout << "ClapTrap Take Damage" << std::endl;
	if(_ep > 0)
	{
		if (_hp >= amount)
			_hp -= amount;
		else
			_hp = 0;
		_ep--;
	}
	else{
		std::cout << "U vas nedostatochno sredstv, pojaluysta povtorite popitko posle vypolnenie balansa" << std::endl;		
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0)
	{
		_hp += amount;
		_ep--;
	}
	else{
		std::cout << "U vas nedostatochno sredstv, pojaluysta povtorite popitko posle vypolnenie balansa" << std::endl;		
	}
}

void			ClapTrap::setName(std::string const name){_name = name;}
std::string 	ClapTrap::getName() const{return _name;}

void			ClapTrap::setHP(unsigned int const hp){_hp = hp;}
unsigned int	ClapTrap::getHP() const{return _hp;}

void			ClapTrap::setEP(unsigned int const ep){_ep = ep;}
unsigned int	ClapTrap::getEP() const{return _ep;}

void			ClapTrap::setDamage(unsigned int const ad){_attack_dmg = ad;}
unsigned int	ClapTrap::getDamage() const{return _attack_dmg;}