/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:02:33 by mgering           #+#    #+#             */
/*   Updated: 2024/12/10 16:02:35 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_Scav") {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " (ScavTrap)constructed (default constructor)." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " (ScavTrap) constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << _name << " (ScavTrap) copy constructed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << _name << " (ScavTrap) assigned" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << _name << " (ScavTrap) destructed." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_hitPoints <= 0) {
		std::cout << _name << " (ScavTrap) is dead." << std::endl;
		return;
	}
	if (_energyPoints <= 0) {
		std::cout << _name << " (ScavTrap) has no energy no more." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << _name << " (ScavTrap) claps " << target << ", inflicting " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << _name << " (ScavTrap) is now in Gate keeper mode." << std::endl;
}