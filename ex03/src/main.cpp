/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:01:33 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 16:44:28 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
        FragTrap        solder1;
        FragTrap        solder2("davo");

        solder1.setName("ash");
        solder1.attack("davo");
        solder2.takeDamage(20);
        std::cout << solder2.getHP() << std::endl;
        solder1.highFivesGuys();

        DiamondTrap     a("ash");
        std::cout << "name = " << a.getName() << std::endl;
        std::cout << "hit point = " << a.getHP() << std::endl;
        std::cout << "energy point = " << a.getEP() << std::endl;
        std::cout << "attack damage = " << a.getDamage() << std::endl;
        a.attack("Errrroooo");
        a.whoAmI();
        return (0);
}