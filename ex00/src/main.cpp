/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:01:33 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 19:14:29 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	solder1;
	ClapTrap	solder2("davo");

	solder1.setName("ash");
	solder1.setDamage(5);
	solder1.attack("davo");
	solder2.takeDamage(5);
	std::cout << solder2.getName() << " HP: " << solder2.getHP() << std::endl;
	return (0);
}