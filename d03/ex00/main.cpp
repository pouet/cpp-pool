#include "FragTrap.hpp"

int main(void)
{
	FragTrap t("toto");

	t.takeDamage(10);
	t.beRepaired(3);
	return 0;
}
