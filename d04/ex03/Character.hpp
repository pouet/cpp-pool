#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_MATERIA 4

class Character : public ICharacter {

public:
	Character(std::string const & type);
	Character(Character const & src);
	virtual ~Character(void);

	Character & operator=(Character const & rhs);

	std::string const & getName(void) const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter & target);

private:
	std::string _name;
	AMateria ** _materias;
	int _nbMaterias;
};

#endif
