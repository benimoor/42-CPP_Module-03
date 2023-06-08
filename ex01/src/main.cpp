/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:01:33 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 21:29:58 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	solder1;
	ScavTrap	solder2("davo");

	solder1.setName("ash");
	solder1.attack("davo");
	solder2.takeDamage(20);
	std::cout << solder2.getName() << " HP: " << solder2.getHP() << std::endl;
	solder2.guardGate();
	return (0);
}
