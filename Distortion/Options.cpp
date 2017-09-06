#include "Options.h"
#include "Helper.h"
#include "Stories.h"
#include <time.h>
#include <random>
#include <cstdlib>
#include <iostream>
#include <string>
using std::cout;
using std::cin;
void repeat(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	char user;
	bool enterStory = false;
	bool menu = true;
	cout << gender << " quickly grabbed " << gender2 << " stuff and then went farther into the woods to hide in a bush. " << gender << " watched as they put out the beautiful fire, sending the phoenix back into the depths of the flames.\n\t";
	cout << Name << " stood there looking at the place the fire once was. rage filled " << gender2 << " heart when they drowned the fire with clear liquid, they did not appreciate the flames. " << Name << " looked around\n";
	cout << "Next to the hiding spot there was a a huge tree.  " << gender << " looked at" << gender2 << "half filled container of gasoline and matches then back at the tree. " << gender << " poured the rest of the gasoline and set the tree ablaze.\n";
	cout << gender << " The fire grew, devouring the tree " << Name << " heard footsteps from behind\n";
	DelayText(50, "                       | 1: stay|---------| 2: Run|\n");
	while (enterStory == false && menu == true)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = true;
			cout << "\n";
			break;
		case '2':
			Clearing();
			cout << Name << " ran as soon as " << gender << " heard the sound of footsteps";
			pausing();
			repeat(Name, gender, gender2, gender3);
			enterStory = true;
			break;
		default:
		case '3':
			cout << Name << " i'm sorry, thats invalid\n1 or 2";
			break;
		}
	}
	if (menu == false)
	{
		return;
	}
}
void battle(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	char user;
	struct Stats
	{
		int HP;
		int AP;
		int DP;
	};
	Stats Player = { 0,0 };
	Player.HP = diceRoll(3, 7);
	Player.AP = diceRoll(2, 6);
	Player.DP = diceRoll(1, 2);
	Stats Family = { 0,0 };
	Family.HP = diceRoll(3, 6);
	Family.AP = diceRoll(2, 6);
	Family.DP = diceRoll(1, 3);

	bool inProg = true;
	while (inProg)
	{
		cout << Name << "'s HP: " << Player.HP << "\n";
		cout << "family HP: " << Family.HP << "\n";
		Player.HP -= Family.AP - Player.DP;
		Family.HP -= Player.AP - Family.DP;
		pausing();
		inProg = Player.HP > 0 && Family.HP > 0;
	}

	cout << "\n";
	if (Player.HP > 0 && Family.HP <= 0)
	{
		cout << Name << " has won the fight, " << gender << " decided to go back to sleep\n";
		pausing();
		inProg = false;
		if (inProg == false)
		{
			return;
		}


	}
	else if (Family.HP > 0 && Player.HP <= 0)
	{
		cout << Name << " has lost the fight," << gender2 << " family crowded around " << gender << "\n\t" << Name << " woke up hooked up to a heart monitor and an IV bag\n";
		pausing();
		inProg = false;
	}
	if (inProg == false)
	{
		return;
	}
}
void Option(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	bool enterStory = true;
	bool menu = true;
	char user;
	Clearing();
	cout << Name << " Headed towards the light, seeing " << gender2 << " friends and family, begging for " << gender2 << " to wake up\n";
	DelayText(50, "                          | 1: Listen|---------| 2: Fight|\n");
	while (enterStory == true && menu == true)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			Clearing();
			cout << Name << " Followed " << gender2 << " friends and family, followed until " << gender << " lost sight of them and was never able to get out of the abyss\n";
			menu = false;
			break;
		case '2':
			battle(Name, gender, gender2, gender3);
			menu = false;
			break;
		default:
		case '3':
			cout << Name << " i'm sorry, thats invalid\n1 or 2";
			break;
		}
	}
	if (menu = false)
	{
		return;
	}

}

void iBattle(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3, std::string & sibling, std::string & sAge)
{   
	char user;
	struct Stats
	{
		int HP;
		int AP;
		int DP;
		int heal;
	};
	int numb;
	Stats Player = { 0,0 };
	Player.HP = diceRoll(3, 7);
	Player.AP = diceRoll(2, 6);
	Player.DP = diceRoll(1, 2);
	Player.heal = diceRoll(2, 6);
	Stats rescue = { 0,0 };
	rescue.HP = diceRoll(3, 6);
	rescue.AP = diceRoll(2, 6);
	rescue.DP = diceRoll(1, 3);
	bool inProg = true;
	while (inProg)
	{
		cout << Name << "'s HP: " << Player.HP << "\n";
		cout << "Rescue person's HP: " << rescue.HP << "\n\n";
		cout << " 1: Eat   2: Attack\n\n";
		cin >> user;
		switch (user)
		{
		case '1':
			numb = diceRoll(1, 2);
			if (numb == 1)
			{
				cout << Name << " was not able to take a bite of " << gender2 << " food to help\n";
			}
			else
			{
				Player.HP = Player.HP + Player.heal;
			}
		default:
		case '2':
			Player.HP -= rescue.AP - Player.DP;
			rescue.HP -= Player.AP - rescue.DP;
			break;
			cout << "\n";
		}

		inProg = Player.HP > 0 && rescue.HP > 0;
	}

	cout << "\n";
	if (Player.HP > 0 && rescue.HP <= 0)
	{
		cout << " wins\n";
		inProg = false;
		if (inProg == false)
		{
			return;
		}


	}
	else if (rescue.HP > 0 && Player.HP <= 0)
	{
		cout << " loses\n";
		inProg = false;
	}
	if (inProg == false)
	{
		return;
	}
}