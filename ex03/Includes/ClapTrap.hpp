/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:34:15 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 20:49:26 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_attack_dmg;
public:
	ClapTrap( void );
	ClapTrap(std::string r_name);
	ClapTrap(ClapTrap &other);
	ClapTrap& operator=(ClapTrap &other);
	virtual ~ClapTrap();
	
	void			setName(std::string const name);
	std::string 	getName() const;

	void			setHP(unsigned int const hp);
	unsigned int	getHP() const;

	void			setEP(unsigned int const ep);
	unsigned int	getEP() const;

	void			setDamage(unsigned int const hp);
	unsigned int	getDamage() const;

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif