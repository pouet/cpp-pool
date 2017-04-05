#include <cstdlib>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap t("toto");

	srand(time(NULL));

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
