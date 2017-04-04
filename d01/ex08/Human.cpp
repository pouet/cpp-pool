#include <iostream>
#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "MELEE ATTACK !!!! on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
	std::cout << "RANGED ATTACK !!!! on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
	std::cout << "INTIMIDATING SHOUT !!!! (dont't work... I'm a stone :P) on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
	struct {
		std::string name;
		void (Human::*f)(std::string const &);
	} tab[3] = {
		{ .name = "meleeAttack", .f = &Human::meleeAttack },
		{ .name = "rangedAttack", .f = &Human::rangedAttack },
		{ .name = "intimidatingShout", .f = &Human::intimidatingShout }
	};

	for (int i = 0; i < 3; i++) {
		if (tab[i].name == action_name)
			(this->*(tab[i].f))(target);
	}
}
