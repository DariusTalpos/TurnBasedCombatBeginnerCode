#pragma once
#include <string>
using std::string;
class Fighter
{
private:
	string Name;
	int HP;
	int ATK;
	int MAX_HP;

public:
	Fighter(string Name, int HP, int ATK) : Name{ Name } ,HP { HP }, ATK{ ATK }, MAX_HP{ HP } {};
	string getName();
	int getHP();
	int getATK();
	void Attacked(Fighter Attacker);
	void Heal();
	bool isDead();
};