#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clap1("Clappy");
	ClapTrap clap2("Trappy");

	clap1.attack("Enemy");
	clap1.takeDamage(3);
	clap1.beRepaired(5);

	for (int i = 0; i < 10; ++i) {
		clap1.attack("Enemy");
	}

	clap2.takeDamage(15);
	clap2.beRepaired(5);
	clap2.attack("Enemy");

	ClapTrap clap3 = clap1;
	ClapTrap clap4;
	clap4 = clap2;
	return (0);
} 