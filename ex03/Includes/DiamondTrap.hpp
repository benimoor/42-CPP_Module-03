/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 23:06:04 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 16:33:53 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap :  public FragTrap,  public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap( void );
	DiamondTrap(std::string r_name);
	DiamondTrap(DiamondTrap &other);
	DiamondTrap& operator=(DiamondTrap &other);
	~DiamondTrap();
	
	void whoAmI();
	using ScavTrap::attack;
};
	
#endif