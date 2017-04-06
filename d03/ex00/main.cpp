#include <cstdlib>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap t("toto");
	FragTrap c = t;

	srand(time(NULL));

	c.vaulthunter_dot_exe("fluttershy");
	t.takeDamage(15);
	t.takeDamage(94);
	t.takeDamage(15);
	t.takeDamage(15);
	t.beRepaired(3);
	t.beRepaired(100);
	t.beRepaired(20);
	t.vaulthunter_dot_exe("rainbowdash");
	t.vaulthunter_dot_exe("rainbowdash");
	t.vaulthunter_dot_exe("rainbowdash");
	t.vaulthunter_dot_exe("rainbowdash");
	t.vaulthunter_dot_exe("rainbowdash");
	return 0;
}
