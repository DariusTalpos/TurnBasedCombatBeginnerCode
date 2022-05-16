#include <iostream>
#include <vector>
#include "Fighter.h"
using namespace std;
Fighter a1("SwordFighter",300, 75);
Fighter a2("GunSlinger", 180, 125);
Fighter enemy("The Dragon", 800, 45);


void showStatsAndActions(Fighter f)
{
	cout << "HP: " << f.getHP() << "\tATK:" << f.getATK() << '\n';
	cout << "Press 1 to attack.\n";
	cout << "Press 2 to heal.\n";
}

int main()
{
	vector<Fighter> echipa;
	echipa.push_back(a1);
	echipa.push_back(a2);
	bool round = true;
	int command;
	cout << "\t\t\t\t\t BATTLE START" << "\n";
	cout << "------------------------------------------------------------------------------------------------\n";
	cout << enemy.getName() << " approaches!\n";
	while (true)
	{
		if (round == true)
		{
			for (int i = 0; i < 2; i++)
				if (echipa[i].isDead() == false)
				{
					cout << "\nALLY: It is the " << echipa[i].getName() << "'s turn\n";
					showStatsAndActions(echipa[i]);
					cout << "Command is: \n";
					cin >> command;
					if (command == 1)
					{
						cout << '\n';
						enemy.Attacked(echipa[i]);
						cout << enemy.getName() << " took " << echipa[i].getATK() << " damage!\n";
						if (enemy.isDead())
						{
							cout << "\n\n";
							cout << enemy.getName() << " has been defeated!";
							return 0;
						}
					}
					else
					{
						cout << '\n';
						echipa[i].Heal();
						cout << echipa[i].getName() << " now has " << echipa[i].getHP() << " HP\n";
					}
				}

		}
	}
}