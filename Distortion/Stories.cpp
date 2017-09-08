#include "Stories.h"
#include "Helper.h"
#include "Options.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include <mmsystem.h>
using std::cout;
using std::cin;
void ThePhoenix(std::string &Name, std::string &gender, std::string &gender2, std::string &gender3, std::string &sibling, std::string &sAge, bool &Secret, bool &Secret2)
{
	Secret = false;
	bool enterStory = true;
	bool menu = true;
	char user;
	Clearing();
	PlaySound("Pback.wav", NULL, SND_LOOP | SND_ASYNC);
	Color(14);
	cout << "                                   ,--------.,--.             \n";
	cout << "                                   '--.  .--'|  ,---.  ,---.  \n";
	cout << "                                      |  |   |  .-.  || .-. : \n";
	cout << "                                      |  |   |  | |  |\   --. \n";
	cout << "                                      `--'   `--' `--' `----' \n";
	cout << "                      ,------. ,--.                           ,--.           \n";
	cout << "                      |  .--. '|  ,---.  ,---.  ,---. ,--,--, `--',--.  ,--. \n";
	cout << "                      |  '--' ||  .-.  || .-. || .-. :|      \,--. \\   \\/  /  \n";
	cout << "                      |  | --' |  | |  |' '-' '\   --.|  ||  ||  | /   /\\  \\  \n";
	cout << "                      `--'     `--' `--' `---'  `----'`--''--'`--''--'  '--' \n";
	cout << "\t" << Name << " Stood in the woods, staring at the huge maple trees and watch as the flames danced along the wind. The flames appeared like a phoenix has just risen out";
	cout << " of the depths of the inferno. They were spiraling out of control through the air. Whenever " << Name << " saw flames, " << gender << " did not see destruction; " << gender;
	cout << " saw beauty, beauty like the fiery phoneix- the huge, majestic bird that glides across the sky, lighting up the way of those who are lost in the dark. " << Name << " wanted people ";
	cout << "to understand the illuminations and " << gender << " was determined to show the world.\n";
	Color(12);
	DelayText(20, "                       | 1: Wake up|---------| 2: sleep|\n");
	Color(14);
	while (menu == true && enterStory == true)
	{

		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = false;

			cout << "\n";
			break;
		case '2':
			Clearing();
			PlaySound("HeartMoniter.wav", NULL, SND_FILENAME | SND_ASYNC);
			cout << Name << " went back to bed\n";
			pausing();
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
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
	
	PlaySound("Alarm.wav", NULL, SND_FILENAME | SND_ASYNC);
	cout << "\tOn that May morning, " << Name << " woke up with an idea from a dream " << gender << " had, to show the world the phoenix that possesses the colors of the blazing inferno that sways side from side. ";
	cout << gender << " jumped out of bed and ran downstairs, got some toast and ran out the door, with " << gender2 << " matches, old crumbled up newspaper and a gallon of gasoline. " << gender << " went to\n";
	Color(12);
	DelayText(20, "                       | 1: Park|---------| 2: Forest|\n");
	Color(14);
	while (enterStory == false && menu == true)
	{
		cin >> user;
		PlaySound("Pback.wav", NULL, SND_LOOP | SND_ASYNC);
		switch (user)
		{
		case '1':
			enterStory = true;
			cout << "\n";
			break;
		case '2':
			Clearing();
			cout << "As " << Name << " ran into the forest, the surroundings started to break apart " << Name << " looked around confused until " << gender << " started to hear the sound of a heart beating\n";
			PlaySound("HeartBeat.wav", NULL, SND_FILENAME | SND_ASYNC);
			pausing();
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
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

	cout << gender << " went to an empty park surrounded by maple trees that has leaves painted red and yellow, gently falling to the ground. The ground is covered by these leaves, making it easier to set on fire ";
	cout << "plus the park was quite, quite as the dead of the night which makes things peaceful.\n\t" << Name << " grabbed " << gender2 << " gasoline and started pouring it all around the tree, using only half of the gasoline ";
	cout << "then grabbed the crumbled up old newspaper and placed near the trail of gasoline. " << gender << " quickly took out a match and lit it in on fire, watching the rise and come to life, consuming anything that gets in it's way ";
	cout << gender << " stood there gazing at the bonfire in amazement watching the flames sawy side by side, sounds of the burning charcoal could be heard from the flames. " << Name << " heard the sound of sirens in the distance\n";
	Color(12);
	DelayText(20, "                       | 1: hide in bush|---------| 2: Run|\n");
	Color(14);
	while (enterStory == true && menu == true)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = false;
			cout << "\n";
			break;
		case '2':
			Clearing();
			cout << Name << " tried to run, but the police had caught " << gender2 << ". Once the police got a hold of " << gender2 << "time slowed down until it everything froze in place. The temperature started to rise\n";
			PlaySound("ForestFire", NULL, SND_FILENAME | SND_ASYNC);
			pausing();
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
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

	cout << gender << " quickly grabbed " << gender2 << " stuff and then went farther into the woods to hide in a bush. " << gender << " watched as they put out the beautiful fire, sending the phoenix back into the depths of the flames.\n\t";
	cout << Name << " stood there looking at the place the fire once was. rage filled " << gender2 << " heart when they drowned the fire with clear liquid, they did not appreciate the flames. " << Name << " looked around\n";
	cout << "Next to the hiding spot there was a a huge tree.  " << gender << " looked at" << gender2 << "half filled container of gasoline and matches then back at the tree. " << gender << " poured the rest of the gasoline and set the tree ablaze.\n";
	cout << gender << " The fire grew, devouring the tree " << Name << " heard footsteps from behind\n";
	Color(12);
	DelayText(20, "                       | 1: stay|---------| 2: Run|\n");
	Color(14);
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
			pausing();
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

	cout << Name << " turned around, to see the locals approching the buring tree. Their eyes widen with amazment of the fire eating the tree away, until it was no longer.\n\t" << Name << " saw the people just standing there, looking at the pile of ashes";
	cout << " in silance. After a few minutes, someone had started another fire, then another, and another. soon everyone had to move to the edge of the forest and they watched the entire forest burn. When the flames was at it hottest a huge bird with flames erupted out of the fire";
	cout << " lighing up the night sky. Everyone cheered as they saw phoenix rise out of the flames " << Name << " noticed that time was slowing down and everything started melting away, leaving " << Name << " in a black abyss. confusion started to build, then soon was replaced by fear. ";
	cout << Name << " tried to look of any signs of another person or a way out, but nothing can be seen, nothing but a warm light and soon someone yelling in the distance.\n";
	Color(12);
	DelayText(20, "           | 1: head towards the light|---------| 2: head towards the yelling|\n");
	Color(14);
	while (enterStory == true && menu == true)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = false;
			cout << "\n";
			break;
		case '2':
			Option(Name, gender, gender2, gender3);
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
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

	cout << Name << " started running towards the light in the distance. When " << gender << " reached the bright light " << Name << " saw a bird made of fire. " << gender2 << " heart skipped with joy at the sight of the magnificent bird. The phoenix motions" << gender2 << " to climb on, so " << gender;
	cout << " does. Once " << Name << " is settled on the back of the phoenix, the bird spreads it's wings and then takes off like bullet. Once they reach a high point in the abyss the flaming bird starts to glide. after a few hours " << gender2 << "vision went black\n\t";
	cout << "On that May morning, " << Name << " woke up with an idea from a dream " << gender << " had\n";
	Color(12);
	DelayText(20, "                       | 1: back to main menu|\n");
	Color(7);
	Secret = true;
	cin >> user;
	while (enterStory == false && menu == true)
	{
		switch (user)
		{
		default:
		case '1':
			menu = false;
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			break;
		}
	}
	if (menu == false)
	{
		return;
	}

}

/*kuru facts:
symptoms:
difficulty walking
poor coordination
difficulty swallowing
slurred speech
moodiness and behavioral changes
dementia
muscle twitching and tremors
inability to grasp objects
random, compulsive laughing or crying
three stages;
stage one: loss of bodliy control
difficulty balancing
maintaining posture
stage two: unable to walk
body tremors
involuntary jerks and movement
stage three: bedridden, incontinent
unable to speak
dementia or behavor changes
starvation
malutrition
Testing: Blood tests
electrodiagnostic (MRI scans)
sounds needed: oceans with laughter and crying in the background, MRI, hospital sounds, compulsive laughter, crying
*/
void Island(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3, std::string & sibling, std::string & sAge, bool &Secret, bool &Secret2)
{
	Secret2 = false;
	bool enterStory = true;
	bool menu = true;
	char user;
	Clearing();
	PlaySound("Background.wav", NULL, SND_LOOP | SND_ASYNC);
	Color(11);
	DelayText(5, "\t::::::::::: ::::::::  :::            :::     ::::    ::: :::::::::\n");
	DelayText(5, "\t    :+:    :+:    :+: :+:          :+: :+:   :+:+:   :+: :+:    :+:\n");
	DelayText(5, "\t    +:+    +:+        +:+         +:+   +:+  :+:+:+  +:+ +:+    +:+\n");
	DelayText(5, "\t    +#+    +#++:++#++ +#+        +#++:++#++: +#+ +:+ +#+ +#+    +:+\n");
	DelayText(5, "\t    +#+           +#+ +#+        +#+     +#+ +#+  +#+#+# +#+    +#+\n");
	DelayText(5, "\t    #+#    #+#    #+# #+#        #+#     #+# #+#   #+#+# #+#    #+#\n");
	DelayText(5, "\t########### ########  ########## ###     ### ###    #### #########\n\n");
	cout << Name << " was standing near the edge of the cliff near the ocean, thinking and wondering, wondering if anyone is out there looking for them.Listening to the calming sounds of the sea crashing into the sides of the cliff and ";
	cout << "rocks below.thinking of reasons why " << gender << " loved the ocean.How the water can be very devastating one minute then calming the next; it?s one of the things" << gender << "loves about the deep - sea. " << gender << " experienced this all firsthand three days";
	cout << "ago. " << Name << " and " << gender2 << " family set out into the ocean and everything was calm, the only sound being the seagulls flying up above and the salty waves gently moving the boat up and down.After an hour, the skies became dark and the waves started";
	cout << "thrashing the boat every which way.The boat crashed onto a sandy beach leaving them stranded on an island.Lucky no one died, just injured.";
	cout << Name << " opened " << gender2 << " eyes when the smell of cooked fish over a campfire filled the air.\n";
	Color(15);
	DelayText(20, "                       | 1: stay|---------| 2: follow sent|\n");
	while (menu == true && enterStory == true)
	{

		cin >> user;
		Clearing();
		switch (user)
		{
		case '1':
			cout << Name << "'s started to feel pain in " << gender2 << " head and joints, the pain became so unbearable that"<< gender <<" collapsed to ground\n";
			pausing();
			//starts feeling a headeche and pain in joints
			Color(7);
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
			break;
		case '2':
			enterStory = false;
			cout << "\n";
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
	Color(11);
	cout << "Following the scent, " << gender2 << " mother?s voice could be heard yelling for her. Dinner was done. " << Name << " took one last look at the ocean depths, promising " << gender3 << " that " << gender << " would come back later tonight as " << gender << " ran back to the shelter. Once there " << gender << " was ";
	cout << "greeted by " << gender2 << " family. " << gender2 << " mother handed " << gender2 << " a piece of the fish they caught as " << gender2 << " dad asked if " << gender << " saw any rescue, " << gender << " shook " << gender2 << " head as " << gender << " bit into the fish. Once they had finished, " << gender2 << " and " << gender2 << sAge << sibling << " decided to play around in the ";
	cout << "woods. As they were running pass the trees and over the fallen logs, they both came across a small area of water with vines hanging from a nearby tree and completing the scene was a cool, misty waterfall. they looked at each other and smiled, deciding ";
	cout << "to play in the water. although the place was not like the ocean, it still had its own charm.\n";
	Color(15);
	DelayText(20, "                       | 1: run into water|---------| 2: grab onto vines|\n");
	while (menu == true && enterStory == false)
	{
		cin >> user;
		Clearing();
		switch (user)
		{
		case '1':
			Clearing();
			cout << "The sound of " << Name << " laughter could be as " << gender << " struggled to run into the water. the entire time amd from that day on " << Name << " whould just suddenly start laughing\n";
			//struggles to run into water, while compulsivly laughing 
			pausing();
			Color(7);
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
			break;
		case '2':
			enterStory = true;
			cout << "\n";

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
	Color(11);
	cout << Name << ", grabbed ahold of one of the vines, took a few steps back and ran towards the edge and flung " << gender3 << " into the water. " << gender2 << "  " << sibling << " just ran into to water and swam towards " << Name << ".After a few minutes, a splash war had broken out between the two, " << Name << " was winning. ";
	cout << "With " << Name << "?s overwhelming number of splashes " << gender << " pushed " << gender2 << sAge << " reletive towards the waterfall where he tripped over a rock, falling through the wall of water.Concerned," << Name << " ran through the waterfall to find a small, dark cave. " << gender2 << " and " << gender2 << sibling << " looked around, finding ";
	cout << "writing on the walls.the writing on the wall said, 'they are dead, all of them' with tally marks next it\n.";
	Color(15);
	DelayText(20, "                       | 1: stay in the cave|---------| 2: leave|\n");
	while (menu == true && enterStory == true)
	{

		cin >> user;
		Clearing();
		switch (user)
		{
		case '1':
			Clearing();
			cout << Name << " slids down the wall of the cave, when " << gender2 << " legs started to feel weak, " << gender2 << " body started to tremble and became unresponsive, everything then went black\n";
			//player sits down, unable to move, her body trembling and moving on it's own
			PlaySound(TEXT("Hospital.wav"), NULL, SND_SYNC);
			pausing();
			Color(7);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
			break;
		case '2':
			enterStory = false;
			cout << "\n";
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
	Color(11);
	cout << "Concern started to grow once more with the thought that someone lived and may still live here.calling " << gender2 << sibling << " for them to leave the cave, since the sky was turning dark, plus their parents would be worried if they stay out any longer. " << gender << " hoped to not come across the owner of the cave";
	cout << "on the way back.Once Cara got back to the shelter, " << gender2 << " parents told them they had to go to bed since it was getting late. " << Name << " laid down on " << gender2 << " bed, waiting for " << gender2 << " parents to go to sleep so " << gender << " could go for " << gender2 << " nightly swim.\n";
	cout << "\t" << gender << " looked out towards the ocean, seeing the reflection of the moon in the water and the light bouncing off the surface. " << Name << " backed up a few feet and went into a full - on sprint towards the edge.The feeling of the air rushed past her, making " << gender2 << " heart beat quicken as " << gender << " fell towards the ";
	cout << "water.Once " << gender << " was under the water " << gender << " opened " << gender2 << " eyes, seeing all kinds of aquatic creatures swimming around.but what was even better was the rays of the moon breaking through the surface of the water made the whole experience better. " << Name << " went to the surface for air, the waves pushed " << gender2 << " up ";
	cout << "and down, and " << gender << " dived back into the water.The water was so dark and mysterious, full of beauty and danger. " << Name << " started to swim deeper down, but " << gender2 << " small body could not handle the pressure of the water, so " << gender << " had to go back up once more\n";
	Color(15);
	DelayText(20, "                       | 1: continue swimming|---------| 2: Go back to bed|\n");
	while (menu == true && enterStory == false)
	{

		cin >> user;
		Clearing();
		switch (user)
		{
		case '1':
			//ocean
			cout << "The wave became more violant and bigger as the night went on. water started to fill " << Name << "'s lungs as " << gender << " tried to gasp for air, but the water has consumed" << Name << "\n";
			//player drowns 
			pausing();
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
			break;
		case '2':
			enterStory = true;
			cout << "\n";
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
	Color(11);
	cout << "After a relaxing swim, Cara headed back towards the shelter to get a good night?s rest. " << gender << " laid down on the ground, pulling " << gender2 << " animal skin covers over " << gender2 << " and drifted off the sleep.The next morning, " << gender << " woke up to smell of cooked fish. " << Name << " walked out to where " << gender2 << " family ate, but they had already ";
	cout << "left to go hunting, so " << gender << " just ate what they left for " << gender2 << " and went back to the cliff.There was a gentle breeze as " << gender << " walked up the hill. " << gender << " smelled the salt water as " << gender << " neared the edge of the cliff.Once " << gender << " reached the edge " << Name << " stood there, looking out towards the water, seeing the fish hop in and ";
	cout << "out of the ocean. " << gender2 << " eyes closed and " << gender << " listened to the sound of the seagulls and the waves hitting the rocks.An hour has past when the sound of the tide changed, causing " << Name << " to open " << gender2 << " eyes to see a rescue ship head " << gender2 << " direction.\n";
	Color(15);
	DelayText(20, "                       | 1: Greet|---------| 2: Hide|\n");
	while (menu == true && enterStory == true)
	{

		cin >> user;
		Clearing();
		switch (user)
		{
		case '1':
			enterStory = false;
			cout << "\n";
			break;
		case '2':
			Clearing();
			cout << Name << " hides behind a tree, hunger starting to take over, " << gender2 << " head started to feel like it was pounding and " << gender << " is losing control of " << gender2 << " body";
			cout << " one one of the people from the rescue passes by " << Name << ", " << gender << " jumps out and uses the rest of " << gender2 << " strangth to attack\n";
			pausing();
			iBattle(Name, gender, gender2, gender3, sibling, sAge);
			//compulsive crying
			pausing();
			Color(7);
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
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
	cout << Name << " ran towards the shelter to see if here parents and " << sAge << sibling << " were there.Once " << gender << " got there " << gender << " saw that they were still gone, so " << gender << " started the fire, making sure it the ship could see it.once finished, " << Name << " headed towards the shore to greet them.\n";
	Color(15);
	DelayText(20, "                                                       | 1: Back to main menu|\n");
	Secret2 = true;
	while (menu == true && enterStory == false)
	{

		cin >> user;
		Clearing();
		switch (user)
		{
		case '1':
			pausing();
			Color(7);
			PlaySound("Silence.wav", NULL, SND_FILENAME | SND_ASYNC);
			MainMenu(Name, gender, gender2, gender3, sibling, sAge, Secret, Secret2);
			menu = false;
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

