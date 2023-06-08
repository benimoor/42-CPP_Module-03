/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:01:33 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 21:34:34 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	solder1;
	FragTrap	solder2("davo");

	solder1.setName("ash");
	solder1.attack("davo");
	solder2.takeDamage(20);
	std::cout << solder2.getName() << " HP: " << solder2.getHP() << std::endl;
	solder1.highFivesGuys();
	return (0);
}
