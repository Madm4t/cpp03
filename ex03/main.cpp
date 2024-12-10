/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:02:27 by mgering           #+#    #+#             */
/*   Updated: 2024/12/10 17:12:50 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	std::cout << "--- Test DiamondTrap default ---" << std::endl;
	DiamondTrap diaTrap1;
	diaTrap1.whoAmI();
	std::cout << "--- Test DiamondTrap with name ---" << std::endl;
	DiamondTrap diaTrap2("Peter");
	diaTrap2.whoAmI();

	diaTrap1.attack(diaTrap2.getName());
	diaTrap2.takeDamage(diaTrap1.getAttackDamage());
	for(int i = 0; i < 51; i++)
		diaTrap2.beRepaired(10);
	diaTrap2.attack(diaTrap1.getName());
	
	return (0);
} 