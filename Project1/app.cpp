#include "Header.h"

App::App()
{

	W.create(VideoMode(width, height, 32), "Test");
	W.setActive(true);
	W.setFramerateLimit(80);
	W.setPosition(Vector2i(0, 0));
	string s;
	string h = "qwertyuiopasdfghjklzxcvbnm";
	for (int i = 0; i < 26; i++)
	{
		achr[i] = h[25 - i];
		h.pop_back();
	}
	this->ttf.loadFromFile("txt.ttf");

};
void App::clean()
{
	this->W.clear(Color(0,0,0));
	topress = list.front().getString();
}

bool App::checkclose()
{
	return (e.type == Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)));
}

void App::ifspace()
{
	if (Keyboard::isKeyPressed(Keyboard::Space))
	{	

	}
}

void App::Draw()
{	
	Vector2f pos = list.front().getPosition();
	list.front().setFillColor(Color::Green);
	if (pos.y >= 1040)
	{
		end = 1;
		list.clear();
	}
	Score();
	for (auto &x : list)
	{	
		x.move(0, (1+(score/10)));
		W.draw(x);
	}
}
void App::ifsteps()
{
	if (steps % lvl == 0 && MYW.end==0)
	{
		showchar();
	}
}

