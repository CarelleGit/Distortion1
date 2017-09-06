#include "Helper.h"
#include "Stories.h"
#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include <cstdlib>
#include <windows.h>
using std::cout;
using std::cin;
using std::string;

void nameInput(std::string & UserInput)
{
	cin >> UserInput;
}

void Gender(std::string & Input1, std::string & Input2, std::string & Input3)
{
	cin >> Input1;
	cin >> Input2;
	cin >> Input3;
}

void Sibling(std::string sibling, std::string sAge)
{
	cin >> sibling;
	cin >> sAge;
}

void askInput(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	cout << "                                 Enter name and then pronouns\n";
	cout << "                                |++++++++++++++++++++++++++++|\n";
	cout << "                                |Examples: she, her, herself |\n";
	cout << "                                |           he, his, himself |\n";
	cout << "                                |       they, their, themself|\n";
	cout << "                                |++++++++++++++++++++++++++++|\n";
	nameInput(Name);
	Gender(gender, gender2, gender3);
	cout << "\n";
	pausing();

}

void sAskInput(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3, std::string & sibling, std::string & sAge)
{

	askInput(Name, gender, gender2, gender3);
	cout << "Enter brother, sister or other\n\n";
	cin >> sibling;
	cout << "Older or younger?\n\n";
	cin >> sAge;
}

void Clearing()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "\n";
	}

}

void pausing()
{
	char Enter;
	bool Pause = true;
	cout << "Press any key to continue\n";
	cin >> Enter;
	while (Pause == true)
	{
		switch (Enter)
		{
		default:
		case '1':
			Pause = false;
			break;
		}
	}

}

void MainMenu(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3, std::string sibling, std::string sAge, bool &Secret, bool &Secret2)
{
	char user;
	bool Exit = false;
	Clearing();
	Color(9);
	DelayText(10, "   .#####.");
	Color(11);
	DelayText(6, ".######..####..######..###");
	Color(10);
	DelayText(20, "#..#####..######.##");
	Color(27);
	DelayText(15, "####..####..##..##.\n");
	Color(12);
	DelayText(6, "   .##..##...##...##.....");
	Color(29);
	DelayText(6, "..##...##..##.##..##...##.....#");
	Color(59);
	DelayText(2, "#...##..##.###.##.\n");
	Color(11);
	DelayText(2, "   .##..##...##...");
	Color(12);
	DelayText(2, ".####....##...##..##.#####....##.....#");
	Color(27);
	DelayText(17, "#...##..##.##.###.\n");
	Color(59);
	DelayText(2, "   .##..##...#");
	Color(10);
	DelayText(10, "#.......##...##...##..##.##..##...##....");
	Color(29);
	DelayText(2, ".##...##..##.##..##.\n");
	Color(9);
	DelayText(5, "   .#####..######..#");
	Color(29);
	DelayText(10, "###....##....####..##..##...##..");
	Color(59);
	DelayText(6, ".######..####..##..##.\n");
	Color(11);
	DelayText(10, "   ........................................");
	Color(27);
	DelayText(19, "...............................\n");
	Color(7);
	bool options = false;
	DelayText(10, "                     |--------------|Main Menu|-------------|\n");
	cout << "                     |                                      |\n";
	DelayText(10, "                     | 1: Play                      2: Exit |\n");
	DelayText(10, "                     |--------------------------------------|\n");
	DelayText(10, "                     |--------|Enter a number only|---------|\n");
	while (Exit == false)
	{
		cin >> user;

		switch (user)
		{
		default:
		case '3':
			cout << " Invalid type 1 or 2\n";
			break;
		case '1':
			Clearing();
			Color(14);
			DelayText(20, "1: The Pheonix:\n");
			DelayText(19, "Inspired by a dream you go out and burn a forest down, not longer after you\nare greeted by a bird made of flames\n");
			if (Secret == true)
			{
				Color(15);
				cout << "Unlocked\n";
			}
			cout << "------------------------\n";
			Color(11);
			DelayText(20, "2: Island:\n");
			DelayText(19, "Stranded on an island whith your family but it's okay since there is plenty of\nfood and you can hear the ocean.\n");
			if (Secret2 == true)
			{
				Color(15);
				cout << "Unlocked\n";
			}
			cout << "------------------------\n";
			if (Secret == true && Secret2 == true)
			{
				Color(7);
				DelayText(20, "3: Secret\n");
				cout << "------------------------\n";
			}
			cout << "[B]ack to main menu\n";
			options = true;
			Exit = true;
			break;
		case '2':
			Exit = true;
			break;
		}
	}
	while (options == true)
	{
		cin >> user;
		Clearing();
		switch (user)
		{
		case 'b':
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			break;
		default:
		case 'r':
			Clearing();
			Color(14);
			DelayText(20, "1: The Pheonix:\n");
			DelayText(19, "Inspired by a dream you go out and burn a forest down, not longer after you\nare greeted by a bird made of flames\n");
			if (Secret == true)
			{
				Color(15);
				cout << "Unlocked\n";
			}
			cout << "------------------------\n";
			Color(11);
			DelayText(20, "2: Island:\n");
			DelayText(19, "Stranded on an island whith your family but it's okay since there is plenty of\nfood and you can hear the ocean.\n");
			if (Secret == true)
			{
				Color(15);
				cout << "Unlocked\n";
			}
			cout << "------------------------\n";
			cout << user << " is invalid\n";
			break;
		case '1':
			Color(14);
			askInput(Name, gender, gender2, gender3);
			Clearing();
			cout << "                                    Name   : " << Name << "\n";
			cout << "                                    Pronoun: " << gender << ", " << gender2 << ", " << gender3 << "\n";
			pausing();
			ThePhoenix(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			options = false;
			break;
		case '2':
			Color(11);
			sAskInput(Name, gender, gender2, gender3, sibling, sAge);
			Clearing();
			cout << "                                    Name: " << Name << "\n";
			cout << "                                    Pronoun: " << gender << ", " << gender2 << ", " << gender3 << "\n";
			cout << "                                    Reletive: " << sibling << "\n";
			cout << "                                    Reletive Age: " << sAge << "\n";
			pausing();
			Island(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			options = false;
			break;
		case '3':
			if (Secret == true && Secret2 == true)
			{
				cout << "Distortion\n";
				DelayText(10, "Though the hallucinations,\n");
				DelayText(10, "In a world made from my mind,\n");
				DelayText(10, "We stand on our last foundations\n");
				DelayText(10, "As we leave everything behind.\n");
				cout << "\n\n";
				DelayText(10, "Thinking everything is fine,\n");
				DelayText(10, "believing nothing has happened,\n");
				DelayText(10, "we slowly reach our deadline\n");
				DelayText(10, "with chaotic laughing.\n");
				cout << "\n\n";
				DelayText(10, "I have eaten my family,\n");
				DelayText(10, "I have burned down a forest,\n");
				DelayText(10, "It was a catastrophe,\n");
				DelayText(10, "My result was horrid.\n");
				cout << "\n\n";
				DelayText(10, "we will never wake\n");
				DelayText(10, "leaving it as a mistake\n");
				pausing();
				MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			}
			else
			{
				Clearing();
				Color(14);
				DelayText(20, "1: The Pheonix:\n");
				DelayText(19, "Inspired by a dream you go out and burn a forest down, not longer after you\nare greeted by a bird made of flames\n");
				if (Secret == true)
				{
					Color(15);
					cout << "Unlocked\n";
				}
				cout << "------------------------\n";
				Color(11);
				DelayText(20, "2: Island:\n");
				DelayText(19, "Stranded on an island whith your family but it's okay since there is plenty of\nfood and you can hear the ocean.\n");
				if (Secret == true)
				{
					Color(15);
					cout << "Unlocked\n";
				}
				cout << "------------------------\n";
				cout << user << " is invalid\n";
			}
		}
	}


}

int diceRoll(int dice, int side)
{
	int Return = 0;
	for (int i = 0; i < dice; ++i)
	{
		srand(time(NULL));
		Return += rand() % side + 1;
	}


	return Return;
}

void DelayText(int millisec, char word[])
{
		for (int i = 0; i < strlen(word); i++)
		{
			cout << word[i];

			Sleep(millisec);
		}
}

void Color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

