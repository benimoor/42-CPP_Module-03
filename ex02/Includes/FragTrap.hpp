/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:38:01 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 21:25:43 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( void );
	FragTrap(std::string r_name);
	FragTrap(FragTrap &other);
	FragTrap& operator=(FragTrap &other);
	~FragTrap();

	void highFivesGuys(void);
	void attack(const std::string& target);
};
	
#endif

