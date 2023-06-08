/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:38:01 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 20:50:54 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap(std::string r_name);
	ScavTrap(ScavTrap &other);
	ScavTrap& operator=(ScavTrap &other);
	~ScavTrap();

	void guardGate();
	void attack(const std::string& target);
};
	
#endif

