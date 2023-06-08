/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:38:01 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 16:39:03 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap :  virtual public ClapTrap
{
public:
	FragTrap( void );
	FragTrap(std::string r_name);
	FragTrap(FragTrap &other);
	FragTrap& operator=(FragTrap &other);
	virtual ~FragTrap();

	virtual void highFivesGuys(void);
};
	
#endif

