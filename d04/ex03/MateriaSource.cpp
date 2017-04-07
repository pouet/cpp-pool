#include "Character.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
	: _saved(new AMateria*[MAX_MATERIA]), _nbSaved(0)
{
	for (int i = 0; i < MAX_MATERIA; i++)
		_saved[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MAX_MATERIA; i++)
		delete _saved[i];
	delete [] _saved;
}

void MateriaSource::learnMateria(AMateria * materia)
{
	if (materia == NULL || _nbSaved >= MAX_MATERIA)
		return;

	for (int i = 0; i < MAX_MATERIA; i++) {
		if (_saved[i] == NULL) {
			_saved[i] = materia->clone();
			_nbSaved++;
			break;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MATERIA; i++) {
		if (_saved[i] != NULL && _saved[i]->getType() == type) {
			return _saved[i]->clone();
		}
	}
	return NULL;
}
