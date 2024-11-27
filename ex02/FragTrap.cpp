#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default_Frog") {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " (FragTrap) constructed (default constructor)." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " (FragTrap) constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << _name << " (FragTrap) copy constructed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << _name << " (FragTrap) assigned." << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << _name << " (FragTrap) dedstructed." << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << _name << " (FragTrap) request a high five ✋" << std::endl;
}