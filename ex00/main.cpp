/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:51:57 by mgering           #+#    #+#             */
/*   Updated: 2024/12/10 15:51:58 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clap1("Clappy");
	ClapTrap clap2("Trappy");

	clap1.attack(clap2.getName());
	clap2.takeDamage(clap1.getAttackDamage());

	std::cout << clap2.getName() << " has " << clap2.getHitPoints() << " HP left." << std::endl;

	clap2.beRepaired(5);

	std::cout << clap2.getName() << " has " << clap2.getHitPoints() << " HP left." << std::endl;

	clap1.setAttackDamage(2);
	for (int i = 0; i < 10; ++i) {
		clap1.attack(clap2.getName());
		clap2.takeDamage(clap1.getAttackDamage());
		std::cout << clap2.getName() << " has " << clap2.getHitPoints() << " HP left." << std::endl;
	}

	clap2.attack("Enemy");
	clap2.takeDamage(15);
	clap2.beRepaired(5);

	ClapTrap clap3 = clap1;
	ClapTrap clap4;
	clap4 = clap2;
	return (0);
} 