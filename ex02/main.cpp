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