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
	DelayText(6, "   .#####..######..####..######..####..#####..######.######..####..##..##.");
	DelayText(6, "   .##..##...##...##.......##...##..##.##..##...##.....##...##..##.###.##.");
	DelayText(2, "   .##..##...##....####....##...##..##.#####....##.....##...##..##.##.###.");
	DelayText(2, "   .##..##...##.......##...##...##..##.##..##...##.....##...##..##.##..##.");
	DelayText(5, "   .#####..######..####....##....####..##..##...##...######..####..##..##.");
	DelayText(6, "   .......................................................................");
	bool options = false;
	DelayText(10, "                     |--------------|Main Menu|-------------|");
	cout << "                     |                                      |\n";
	DelayText(10, "                     | 1: Play                      2: Exit |");
	DelayText(10, "                     |--------------------------------------|");
	DelayText(10, "                     |--------|Enter a number only|---------|");
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
			DelayText(20, "1: The Pheonix:");
			DelayText(19, "Inspired by a dream you go out and burn a forest down, not longer after you\nare greeted by a bird made of flames");
			cout << "------------------------\n";
			DelayText(20, "2: Island");
			DelayText(19, "Stranded on an island whith your family but it's okay since there is plenty of\nfood and you can hear the ocean.");
			cout << "------------------------\n";
			if (Secret == true && Secret2 == true)
			{
				DelayText(20, "3: Secret");
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
			DelayText(20, "1: The Pheonix:");
			DelayText(19, "Inspired by a dream you go out and burn a forest down, not longer after you\nare greeted by a bird made of flames");
			cout << "------------------------\n";
			DelayText(20, "2: Island");
			DelayText(19, "Stranded on an island whith your family but it's okay since there is plenty of\nfood and you can hear the ocean.");
			cout << "------------------------\n";
			cout << user << " is invalid\n";
			break;
		case '1':
			askInput(Name, gender, gender2, gender3);
			Clearing();
			cout << "                                    Name   : " << Name << "\n";
			cout << "                                    Pronoun: " << gender << ", " << gender2 << ", " << gender3 << "\n";
			pausing();
			ThePhoenix(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			options = false;
			break;
		case '2':
			sAskInput(Name, gender, gender2, gender3, sibling, sAge);
			Clearing();
			cout << "                                    Name        : " << Name << "\n";
			cout << "                                    Pronoun     : " << gender << ", " << gender2 << ", " << gender3 << "\n";
			cout << "                                    Reletive    : " << sibling << "\n";
			cout << "                                    Reletive Age: " << sAge << "\n";
			pausing();
			Island(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			options = false;
			break;
		case '3':
			if (Secret == true && Secret2 == true)
			{
				cout << "Distortion\n";
				DelayText(10, "Though the hallucinations,");
				DelayText(10, "In a world made from my mind,");
				DelayText(10, "We stand on our last foundations");
				DelayText(10, "As we leave everything behind.");
				cout << "\n\n";
				DelayText(10, "Thinking everything is fine,");
				DelayText(10, "believing nothing has happened,");
				DelayText(10, "we slowly reach our deadline");
				DelayText(10, "with chaotic laughing.");
				cout << "\n\n";
				DelayText(10, "I have eaten my family,");
				DelayText(10, "I have burned down a forest,");
				DelayText(10, "It was a catastrophe,");
				DelayText(10, "My result was horrid.");
				cout << "\n\n";
				DelayText(10, "we will never wake");
				DelayText(10, "leaving it as a mistake");
				pausing();
				MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			}
			else
			{
				DelayText(20, "1: The Pheonix:");
				DelayText(19, "Inspired by a dream you go out and burn a forest down, not longer after you\nare greeted by a bird made of flames");
				cout << "------------------------\n";
				DelayText(20, "2: Island");
				DelayText(19, "Stranded on an island whith your family but it's okay since there is plenty of\nfood and you can hear the ocean.");
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
	{
		for (int i = 0; i < strlen(word); i++)
		{
			if (word[i] == '\n')
			{
				cout << '\n';
			}
			else
			{
				cout << word[i];

				Sleep(millisec);
			}

		}
		cout << "\n";

	}
}

