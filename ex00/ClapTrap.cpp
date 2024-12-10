/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgering <mgering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:51:41 by mgering           #+#    #+#             */
/*   Updated: 2024/12/10 15:51:42 by mgering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << _name << " constructed (default constructor)." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << _name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << _name << " copy constructed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " assigned." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_hitPoints <= 0) {
		std::cout << _name << " can't attack no HP left" << std::endl;
		return;
	}
	if (_energyPoints <= 0) {
		std::cout << _name << " can't attack no energy Points left." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout	<< _name << " attacks " << target << ", causing " << _attackDamage
				<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0; 
	std::cout	<< _name << " takes " << amount << " points of damage! HP left: "
				<< _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints <= 0) {
		std::cout << _name << " can't' be repaired is already dead." << std::endl;
		return;
	}
	if (_energyPoints <= 0) {
		std::cout << _name << " can't' be repaired no energy left." << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << _name << " repairs " << amount << " HP! HP now: " << _hitPoints << std::endl;
}

std::string ClapTrap::getName() const {
	return _name;
}

int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}

int ClapTrap::getHitPoints() const {
	return _hitPoints;
}

void ClapTrap::setAttackDamage(int amount) {
	_attackDamage = amount;
}