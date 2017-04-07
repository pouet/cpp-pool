#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad {

public:
	Squad(void);
	Squad(Squad const & src);
	~Squad(void);

	// TODO: operator = overload

	int getCount(void) const;
	ISpaceMarine * getUnit(int n) const;
	int push(ISpaceMarine * marine);

private:
	ISpaceMarine ** _units;
	int _nbUnits;
};

#endif
