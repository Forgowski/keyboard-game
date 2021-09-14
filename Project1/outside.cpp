#include "Header.h"
void Score()
{
	Font ttf;
	string s;
	stringstream count;
	count << MYW.score;
	ttf.loadFromFile("txt.ttf");
	Text score(s, ttf);
	Text scorecount(s, ttf);
	score.setString("SCORE ");
	score.setCharacterSize(40);
	score.setFillColor(Color(255, 0, 0));
	score.setPosition(1500, 40);
	scorecount.setCharacterSize(40);
	scorecount.setString(count.str());
	scorecount.setFillColor(Color(255, 0, 0));
	scorecount.setPosition(1700, 40);
	MYW.W.draw(scorecount);
	MYW.W.draw(score);
	
}
string rcharacter()
{
	
	return MYW.achr[rand() % 26];
}
void showchar()
{
	string s;
	Text chr(s,MYW.ttf);
	chr.setString(rcharacter());
	chr.setPosition(rand()%1000, -50);
	chr.setCharacterSize(50);
	chr.setFillColor(Color(255, 255, 255));
	MYW.list.push_back(chr);
}
void restart()
{
	if (MYW.end == 1)
	{
		Font ttf;
		string s="YOU LOST PRESS ENTER TO RESTART";
		ttf.loadFromFile("txt.ttf");
		Text endstring(s, ttf);
		endstring.setCharacterSize(70);
		endstring.setFillColor(Color(255, 0, 0));
		endstring.setPosition(40, 600);
		MYW.W.draw(endstring);

	}
	if (Keyboard::isKeyPressed(Keyboard::Enter))
	{
		MYW.end = 0;
		MYW.score = 0;
	}
}
void whichkey()
{
	if (Keyboard::isKeyPressed(Keyboard::Q) && MYW.topress == "q")
	{
			MYW.list.pop_front();
			MYW.score++;		
	}
	else if (Keyboard::isKeyPressed(Keyboard::W) && MYW.topress == "w")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::E) && MYW.topress == "e")
	{
			MYW.list.pop_front();
			MYW.score++;	
	}
	else if (Keyboard::isKeyPressed(Keyboard::R) && MYW.topress == "r")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::T) && MYW.topress == "t")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::Y) && MYW.topress == "y")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::U) && MYW.topress == "u")
	{	
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::I) && MYW.topress == "i")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::O) && MYW.topress == "o")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::P) && MYW.topress == "p")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::A) && MYW.topress == "a")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::S) && MYW.topress == "s")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::D) && MYW.topress == "d")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::F) && MYW.topress == "f")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::G) && MYW.topress == "g")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::H) && MYW.topress == "h")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::J) && MYW.topress == "j")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::K) && MYW.topress == "k")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::L) && MYW.topress == "l")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::Z) && MYW.topress == "z")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::X) && MYW.topress == "x")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::C) && MYW.topress == "c")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::V) && MYW.topress == "v")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::B) && MYW.topress == "b")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::N) && MYW.topress == "n")
	{
			MYW.list.pop_front();
			MYW.score++;
	}
	else if (Keyboard::isKeyPressed(Keyboard::M) && MYW.topress == "m")
	{
			MYW.list.pop_front();
			MYW.score++;
	}

}

