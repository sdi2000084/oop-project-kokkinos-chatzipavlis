#include <iostream>
#include "Characters.h"
#include <conio.h>

using namespace std;

// GLOBALS
int WerewolfCount = 0, VampireCount = 0;    // Global counters for the members of each team, initialized to 0.

// GOD MEMBER-FUNCTIONS

int God::getHealth(void)
{
    return Health;
}

int God::getAttack(void)
{
    return Attack;
}

int God::getDefense(void)
{
    return Defense;
}

God::God(void)
{
    cout << "God's constructor activated.\n";
}

int God::getX(void)
{
    return LocationX;
}

int God::getY(void)
{
    return LocationY;
}

// WEREWOLF MEMBER-FUNCTIONS

// VAMPIRE MEMBER-FUNCTIONS

// AVATAR MEMBER-FUNCTIONS

Avatar::Avatar(char t) : Team_Selection(t)
{
	// Team_Selection = t;
	cout << "Avatar created.\n";
}

char Avatar::Move(void)
{
	int getch();
	char inputkey;

	inputkey = getch();

	while (inputkey != '0')
	{
		if (inputkey == 72)
		{
			cout << "UP\n";
			return 'u';
		}
		else if (inputkey == 80)
		{
			cout << "DOWN\n";
			return 'd';
		}
		else if (inputkey == 75)
		{
			cout << "LEFT\n";
			return 'l';
		}
		else if (inputkey == 77)
		{
			cout << "RIGHT\n";
			return 'r';
		}

		inputkey = getch();
	}

	cout << inputkey << endl;
}