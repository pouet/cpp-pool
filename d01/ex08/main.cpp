#include "Human.hpp"

int main(void)
{
	Human h;

	h.action("meleeAttack", "Fluttershy");
	h.action("rangedAttack", "Rainbowdash");
	h.action("intimidatingShout", "Pinkiepie");
	h.action("nothing", "nobody");
	return 0;
}
