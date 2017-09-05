#include "Stories.h"
#include "Helper.h"
#include "Options.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include <MMSystem.h>
using std::cout;
using std::cin;
void ThePhoenix(std::string &Name, std::string &gender, std::string &gender2, std::string &gender3, std::string sibling, std::string sAge)
{
	bool enterStory = true;
	bool menu = true;
	char user;
	Clearing();

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
	DelayText(50, "                       | 1: Wake up|---------| 2: sleep|\n");
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
			//add heart moniter sound
			pausing();

			MainMenu(Name, gender, gender2, gender3, sibling, sAge);
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
	DelayText(50, "                       | 1: Park|---------| 2: Forest|\n");
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
			cout << "As " << Name << " ran into the forest, the surroundings started to break apart " << Name << " looked around confused until " << gender << " started to hear the sound of a heart beating\n";
			PlaySound("HeartBeat.wav", NULL, SND_FILENAME | SND_ASYNC);
			//add hear beat
			pausing();
			MainMenu(Name, gender, gender2, gender3, sibling, sAge);
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
	DelayText(50, "                       | 1: hide in bush|---------| 2: Run|\n");
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
			//add fire
			pausing();
			MainMenu(Name, gender, gender2, gender3, sibling, sAge);
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
	DelayText(50, "           | 1: head towards the light|---------| 2: head towards the yelling|\n");
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
			MainMenu(Name, gender, gender2, gender3, sibling, sAge);
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
	DelayText(50, "                       | 1: back to main menu|\n");
	cin >> user;
	while (enterStory == false && menu == true)
	{
		switch (user)
		{
		default:
		case '1':
			menu = false;
			MainMenu(Name, gender, gender2, gender3, sibling, sAge);
			break;
		}
	}
	if (menu == false)
	{
		return;
	}

}

void Island(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3, std::string sibling, std::string sAge)
{
	bool enterStory = true;
	bool menu = true;
	char user;
	Clearing();
	//first
	cout << "Cala was standing near the edge of the cliff near the ocean, thinking and wondering, wondering if anyone is out there looking for them.Listening to the calming sounds of the sea crashing into the sides of the cliff and rocks below.thinking of";
	cout << "reasons why she loved the ocean.How the water can be very devastating one minute then calming the next; it’s one of the things she loves about the deep - sea.She experienced this all firsthand three days ago.Cala and her family set out into";
	cout << "the ocean and everything was calm, the only sound being the seagulls flying up above and the salty waves gently moving the boat up and down.After an hour, the skies became dark and the waves started thrashing the boat every which way.The boat";
	cout << "crashed onto a sandy beach leaving them stranded on an island.Lucky no one died, just injured.\n";
	cout << "\tCala opened her eyes when the smell of cooked fish over a campfire filled the air.\n";
	pausing();
	// option 1: stay 2: follow sent
	//option 1- ocean noise
	//second

	cout << "Following the scent, her mother’s voice could be heard yelling for her.Dinner was done.Cala took one last look at the ocean depths, promising herself that she would come back later tonight as she ran back to the shelter.Once there she was greeted by her";
	cout << "family.Her mother handed her a piece of the fish they caught as her dad asked if she saw any rescue, she shook her head as she bit into the fish.Once they had finished, her and her younger brother decided to play around in the woods.As they were running";
	cout << "pass the trees and over the fallen logs, they both came across a small area of water with vines hanging from a nearby tree and completing the scene was a cool, misty waterfall.they looked at each other and smiled, deciding to play in the water.although the";
	cout << "place was not like the ocean, it still had its own charm.";
	pausing();
	//option 1: run into water 2: run to tree
	//option 1: sibling disappers
	//third

	cout << "Cala, grabbed ahold of one of the vines, took a few steps back and ran towards the edge and flung herself into the water.Her brother just ran into to water and swam towards Cala.After a few minutes, a splash war had broken out between the two, Cala was winning.With";
	cout << "Cala’s overwhelming number of splashes she pushed her younger sibling towards the waterfall where he tripped over a rock, falling through the wall of water.";
	pausing();
	//option 1: stay 2: run after sibling
	//option 1: collapses 
	//fourth

	cout << "Concerned, Cala ran through the waterfall to find a small, dark cave.Her and her brother looked around, finding writing on the walls.the writing on the wall said, 'they are dead, all of them' with tally marks next it.Concern started to grow once more with the thought that someone";
	cout << "lived and may still live here";
	pausing();
	//option 1: stay in cave 2: leave
	//option 1: the rotten corpise are seen
	//5

	cout << "calling her brother for them to leave the cave, since the sky was turning dark, plus their parents would be worried if they stay out any longer. She hoped to not come across the owner of the cave on the way back. Once Cara got back to the shelter, her parents told them they had to go";
	cout << "to bed since it was getting late. Cala laid down on her bed, waiting for her parents to go to sleep so she could go for her nightly swim.";
	cout << "She looked out towards the ocean, seeing the reflection of the moon in the water and the light bouncing off the surface.Cala backed up a few feet and went into a full - on sprint towards the edge.The feeling of the air rushed past her, making her heart beat quicken as she fell towards the water.";
	cout << "Once she was under the water she opened her eyes, seeing all kinds of aquatic creatures swimming around.but what was even better was the rays of the moon breaking through the surface of the water made the whole experience better.Cala went to the surface for air, the waves pushed her up and down,";
	cout << "and she dived back into the water.The water was so dark and mysterious, full of beauty and danger.Cala started to swim deeper down, but her small body could not handle the pressure of the water, so she had to go back up once more.";
	pausing();
	//option 1: continue to swim 2: go to bed
	// option 1: drowns
	//sixth

	cout << "After a relaxing swim, Cara headed back towards the shelter to get a good night’s rest.She laid down on the ground, pulling her animal skin covers over her and drifted off the sleep.The next morning, she woke up to smell of cooked fish.Cala walked out to where her family ate, but they had already left to go";
	cout << "hunting, so she just ate what they left for her and went back to the cliff.There was a gentle breeze as she walked up the hill.She smelled the salt water as she neared the edge of the cliff.Once she reached the edge Cala stood there, looking out towards the water, seeing the fish hop in and out of the ocean.";
	cout << "Her eyes closed and she listened to the sound of the seagulls and the waves hitting the rocks.An hour has past when the sound of the tide changed, causing Cala to open her eyes to see a rescue ship head her direction.";
	pausing();
	//options 1: greet 2: hide
	//option 2: one of the crew members walk pass hiding spot, player attacks.
	//seventh
	cout << "Cala ran towards the shelter to see if here parents and younger brother were there.Once she got there she saw that they were still gone, so she started the fire, making sure it the ship could see it.once finished, Cala headed towards the shore to greet them.";
	pausing();
	//end
	//manic laughter
}
