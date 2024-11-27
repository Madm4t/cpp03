#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {
	ClapTrap clap("Clappy");

	clap.attack("Target A");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << std::endl;

	ScavTrap scav("Scavvy");

	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());
	scav.guardGate();

	ScavTrap scav2("Bobby");

	for (int i = 0; i < 10; i++) {
		scav.attack(scav2.getName());
		scav2.takeDamage(scav.getAttackDamage());
		scav2.beRepaired(10);
	}

	ScavTrap scav3;
	scav3 = scav;

	return (0);
} 