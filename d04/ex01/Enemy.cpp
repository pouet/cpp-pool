#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
	: _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const & enemy)
{
	*this = enemy;
}

Enemy::~Enemy(void)
{
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	_type = rhs.getType();
	_hp = rhs.getHp();

	return *this;
}

std::string const & Enemy::getType(void) const
{
	return _type;
}

int Enemy::getHp(void) const
{
	return _hp;
}

void Enemy::setHp(int n)
{
	_hp = n;
	if (_hp < 0)
		_hp = 0;
}

void Enemy::takeDamage(int damage)
{
	setHp(getHp() - damage);
}
