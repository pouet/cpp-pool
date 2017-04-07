#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);

	void learnMateria(AMateria * materia);
	AMateria * createMateria(std::string const & type);

private:
	AMateria ** _saved;
	int _nbSaved;
};

#endif
