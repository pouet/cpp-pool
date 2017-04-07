#include "Character.hpp"

Character::Character(std::string const & name)
	: _name(name), _materias(new AMateria*[MAX_MATERIA]), _nbMaterias(0)
{
	for (int i = 0; i < MAX_MATERIA; i++)
		_materias[i] = NULL;
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < MAX_MATERIA; i++)
		delete _materias[i];
	delete [] _materias;
}

Character & Character::operator=(Character const & rhs)
{
	_name = rhs._name;
	_materias = new AMateria*[MAX_MATERIA];
	for (int i = 0; i < MAX_MATERIA; i++)
		_materias[i] = rhs._materias[i];
	_nbMaterias = rhs._nbMaterias;

	return *this;
}

std::string const & Character::getName(void) const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return;

	for (int i = 0; i < MAX_MATERIA; i++) {
		if (_materias[i] == NULL) {
			_materias[i] = m;
			_nbMaterias++;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= MAX_MATERIA || _materias[idx] == NULL)
		return;
	_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx >= MAX_MATERIA || _materias[idx] == NULL)
		return;
	_materias[idx]->use(target);
}
