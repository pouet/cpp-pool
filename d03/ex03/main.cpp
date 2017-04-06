#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	FragTrap t("toto");
	ScavTrap s("spongebob");
	NinjaTrap n("NINJAAAAAA");

	FragTrap c = t;
	ScavTrap d = s;

	srand(time(NULL));

	c.vaulthunter_dot_exe("fluttershy");
	c.vaulthunter_dot_exe("fluttershy");
	c.vaulthunter_dot_exe("fluttershy");
	d.challengeNewcomer();
	d.challengeNewcomer();
	d.challengeNewcomer();

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

	s.challengeNewcomer();
	s.challengeNewcomer();
	s.challengeNewcomer();
	s.challengeNewcomer();
	s.challengeNewcomer();

	n.ninjaShoebox(t);
	n.ninjaShoebox(s);
	n.ninjaShoebox(n);

	return 0;
}
