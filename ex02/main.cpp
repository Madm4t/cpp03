/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:02:27 by mgering           #+#    #+#             */
/*   Updated: 2024/12/10 16:02:28 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void) {
	ClapTrap clap("Clappy");

	clap.attack("Target A");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << std::endl;

	FragTrap frag("Fraggy");
	ScavTrap scav("Scavvy");

	scav.attack(frag.getName());
	frag.takeDamage(scav.getAttackDamage());
	scav.guardGate();
	frag.attack(scav.getName());
	scav.takeDamage(frag.getAttackDamage());

	frag.highFivesGuys();

	return (0);
} 