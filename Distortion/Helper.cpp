#include "Helper.h"
#include "Stories.h"
#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include <cstdlib>
#include <windows.h>
#include <fstream>
using std::cout;
using std::cin;
using std::string;
using std::fstream;

void Saveph(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	fstream save;
	string user;
		cout << "Name of save?\n";
		cin >> user;
		//getline(cin, user);
		user.append(".txt");
		save.open(user, std::ios::out);
		cin.ignore(1000, '\n');
		save << "Name: ";
		save << Name << "\n";
		cin.ignore(1000, '\n');
		save << "Pronoun: ";
		save << gender << "\n";
		cin.ignore(1000, '\n');
		save << "Pronoun 2: ";
		save << gender2 << "\n";
		cin.ignore(1000, '\n');
		save << "Pronoun 3: ";
		save << gender3 << "\n";
		cin.ignore(1000, '\n');
		save.flush();
		save.close();
}

void Loadph(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	fstream load;
	string file;
	cin >> file;
	file.append(".txt");
	load.open(file);
	if (load.fail())
	{
		cout << "Sorry that save does not exsit\n";
		pausing();
	}
}

void nameInput(std::string & UserInput)
{
	cout << "Name: ";
	cin >> UserInput;
}

void Gender(std::string & Input1, std::string & Input2, std::string & Input3)
{
	cout << "she, he, they\n";
	cin >> Input1;
	cout << "her, his, their\n";
	cin >> Input2;
	cout << "herself, himself, themself\n";
	cin >> Input3;
}

void Sibling(std::string sibling, std::string sAge)
{
	cin >> sibling;
	cin >> sAge;
}

void askInput(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	char User = 0;
	cout << "Would like to load a save?\n";
	cout << "1: Yes            2: No\n";
	cin >> User;
	if (User == 1)
	{
		Loadph(Name, gender, gender2, gender3);
	}
	else if (User == 2)
	{
		cout << "Would you like to save this for The Phoenix?\n";
		cout << "1: Yes                    2: No\n";
		cin >> User;
		switch (User)
		{
		default:
		case '1':
			nameInput(Name);
			Gender(gender, gender2, gender3);
			cout << "\n";
			pausing();
			Clearing();
			Saveph(Name, gender, gender2, gender3);
			break;
		case '2':
			nameInput(Name);
			Gender(gender, gender2, gender3);
			cout << "\n";
			pausing();
			Clearing();
			break;
		}
	}
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
	DelayText(30, "   ........................................");
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
			Color(7);
			cout << "------------------------\n";
			DelayText(20, "Not yet added\n");
			cout << "------------------------\n";
			DelayText(20, "Not yet added\n");
			cout << "------------------------\n";
			if (Secret == true && Secret2 == true)
			{
				Color(7);
				DelayText(20, "[S]ecret\n");
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
	bool menu = false;
	while (options == true && menu == false)
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
			cout << "------------------------\n";
			DelayText(20, "Not yet added\n");
			cout << "------------------------\n";
			DelayText(20, "Not yet added\n");
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
		case 's':
			if (Secret == true && Secret2 == true)
			{
			bool menu = false;
			PlaySound("Ominous-music-box.wav", NULL, SND_LOOP | SND_ASYNC);
			cout << "Distortion\n";
			Color(11);
			DelayText(100, "Though the hallucinations,\n");
			Color(14);
			DelayText(100, "In a world made from my mind,\n");
			Color(15);
			DelayText(100, "We stand on our last foundations\n");
			DelayText(100, "As we leave everything behind.\n");
			cout << "\n\n";
			Color(11);
			DelayText(100, "Thinking everything is fine,\n");
			Color(14);
			DelayText(100, "believing nothing has happened,\n");
			Color(15);
			DelayText(100, "we slowly reach our deadline\n");
			DelayText(100, "chaotically laughing.\n");
			cout << "\n\n";
			Color(11);
			DelayText(100, "I have eaten my family,\n");
			Color(14);
			DelayText(100, "I have burned down a forest,\n");
			Color(11);
			DelayText(100, "It was a catastrophe,\n");
			Color(14);
			DelayText(100, "My result was horrid.\n");
			cout << "\n\n";
			Color(15);
			DelayText(100, "we will never wake\n");
			DelayText(100, "leaving it all as a mistake\n\n");
			pausing();
			Clearing();
			Color(7);
			DelayText(30, "1: Kuru\n");
			DelayText(30, "2: back to menu\n");
			while (options == true && menu == false)
			{
				cin >> user;
				switch (user)
				{
				case '1':
					Clearing();
					Color(10);
					DelayText(50, "\tKuru is fatel and rare, the highest prevalence was in 1950 and 1960 among the\n fore people of New Guinea.\n");
					DelayText(50, "this disease is was obtained when the Fore people eat the dead as a uneral ritual\n");
					DelayText(50, "\nThere are three stages to this disease\n");
					DelayText(50, "\t\tThe first stage:\n\t\t\tLoss of bodliy control\n\t\t\tMaintaining posture\n");
					DelayText(50, "\t\tThe second stage:\n\t\t\tUnable to walk\n\t\t\tBody tremors\n\t\t\tInvoluntary jerks and movement\n");
					DelayText(50, "\t\tThe third stage:\n\t\t\tBedridden, incontinent\n\t\t\tUnable to speak\n\t\t\tDementia or behavor changes\n\t\t\tStarvation\n\t\t\tMalutrition\n");
					DelayText(50, "Most people die in a year\n");
					pausing();
					menu = true;
					MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
					break;
				default:
				case '2':
					menu = true;
					MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
					break;
				}
				if (menu == true)
				{
					return;
				}
			}
			}
			if (menu == true)
			{
				return;
			}
			else
			{
			cout << user << " is invalid\n";
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = true;
			
			break;
				}
			}
		if (menu == true)
		{
			return;
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


