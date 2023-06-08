#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(ClapTrap::getName() + "_clap_name")
{
	std::cout << "> DiamondTrap default ctor" << std::endl;
	this->setName("No Name");
	this->setHP(FragTrap::getHP());
	this->setEP(ScavTrap::getEP());
	this->setDamage(30);
}


DiamondTrap::DiamondTrap(std::string r_name) : ClapTrap(r_name + "_clap_name")
{
	std::cout << "> DiamondTrap default ctor" << std::endl;
	this->setName(r_name);
	this->setHP(FragTrap::getHP());
	this->setEP(ScavTrap::getEP());
	this->setDamage(30);
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "DiamondTrap cpy ctor" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack_dmg = other._attack_dmg;
	}
}
DiamondTrap& DiamondTrap::operator=(DiamondTrap &other)
{
	std::cout << "DiamondTrap operator =" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack_dmg = other._attack_dmg;
	}
	return *this;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : < " << _name << " > default dtor" << std::endl;
}

void DiamondTrap::whoAmI()
{
        std::cout << "DiamondTrap's name is " << this->_name << std::endl;
        std::cout << "ClapTrap's name is " << this->ClapTrap::getName() << std::endl;
}