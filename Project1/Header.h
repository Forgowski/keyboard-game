#pragma once
#ifndef HED_INCLUDED
#define HED_INCLUDED

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <sstream>
#include <string.h>
#include <time.h>
#include <list>
using namespace std;
using namespace sf;

class App
{
public:
	App();
	RenderWindow W;
	int height = 1080;
	int width = 1920;
	int steps = 0;
	int lvl = 90;
	int score = 0;
	int end = 0;
	int configstatus=0;
	Event e{};
	string topress;
	string achr[26],s;
	Font ttf;
	Text chr;
	Text lvl1, lvl2, lvl3, lvl4, lvl5, header;
	list <Text> list;
	void clean();
	bool checkclose();
	void ifspace();
	void Draw();
	void ifsteps();

};
void config();
void configdraw();
void Score();
string rcharacter();
void showchar();
void whichkey();
void restart();
void lvl();
inline App MYW;
#endif 