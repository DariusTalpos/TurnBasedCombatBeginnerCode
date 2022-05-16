#include "Fighter.h"

void Fighter::Attacked(Fighter Attacker)
{
	HP -= Attacker.ATK;
}

void Fighter::Heal()
{
	HP += MAX_HP / 10;
	if (HP >= MAX_HP)
		HP = MAX_HP;
}

bool Fighter::isDead()
{
	if (HP <= 0)
		return true;
	return false;
}

string Fighter::getName()
{
	return Name;
}

int Fighter::getHP()
{
	return HP;
}

int Fighter::getATK()
{
	return ATK;
}
