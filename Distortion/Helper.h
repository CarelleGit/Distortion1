#pragma once
#include <string>
#include <fstream>
using std::fstream;

void Saveph(std::string &Name, std::string &gender, std::string &gender2, std::string &gender3);
void Loadph(std::string &Name, std::string &gender, std::string &gender2, std::string &gender3);
void saveis(std::string &Name, std::string &gender, std::string &gender2, std::string &gender3, std::string &sibling, std::string &sAge);
void Loadis(std::string &Name, std::string &gender, std::string &gender2, std::string &gender3, std::string &sibling, std::string &sAge);
void nameInput(std::string &UserInput);
void Gender(std::string &Input1, std::string &Input2, std::string & Input3);
void Sibling(std::string sibling, std::string sAge);
void askInput(std::string &Name, std::string &gender, std::string &gender2, std::string &gender3);
void sAskInput(std::string & Name, std::string & gender, std::string &gender2, std::string &gender3, std::string &sibling, std::string &sAge);
void Clearing();
void pausing();
void MainMenu(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3, std::string sibling, std::string sAge, bool &Secret, bool &Secret2);
int diceRoll(int dice, int side);
void DelayText(int millisec, char word[]);
void Color(int color);