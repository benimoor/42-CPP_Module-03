/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:38:01 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 16:35:39 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap :  virtual public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap(std::string r_name);
	ScavTrap(ScavTrap &other);
	ScavTrap& operator=(ScavTrap &other);
	virtual ~ScavTrap();

	virtual void guardGate();
	virtual void attack(const std::string& target);
};
	
#endif

