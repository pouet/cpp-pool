#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad {

public:
	Squad(void);
	Squad(Squad const & src);
	~Squad(void);

	Squad & operator=(Squad const & rhs);

	int getCount(void) const;
	ISpaceMarine * getUnit(int n) const;
	int push(ISpaceMarine * marine);

private:
	ISpaceMarine ** _units;
	int _nbUnits;
};

#endif
