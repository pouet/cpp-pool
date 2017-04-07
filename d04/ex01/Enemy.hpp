#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & enemy);
	virtual ~Enemy(void);

	Enemy & operator=(Enemy const & rhs);

	std::string const & getType(void) const;
	int getHp(void) const;

	virtual void takeDamage(int damage);

protected:
	void setHp(int);

private:
	int _hp;
	std::string _type;
};

#endif
