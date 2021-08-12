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
	if (Keyboard::isKeyPressed(Keyboard::Q))
	{
		if (MYW.topress == "q")
		{
			MYW.list.pop_front();
			MYW.score++;
			
		}
		
	}
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		if (MYW.topress == "w")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
		
	}
	if (Keyboard::isKeyPressed(Keyboard::E))
	{
		if (MYW.topress == "e")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
		
	}
	if (Keyboard::isKeyPressed(Keyboard::R))
	{
		if (MYW.topress == "r")
		{
			MYW.list.pop_front();
			MYW.score++;
		}		
	}
	if (Keyboard::isKeyPressed(Keyboard::T))
	{
		if (MYW.topress == "t")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::Y))
	{
		if (MYW.topress == "y")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::U))
	{
		if (MYW.topress == "u")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::I))
	{
		if (MYW.topress == "i")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::O))
	{
		if (MYW.topress == "o")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::P))
	{
		if (MYW.topress == "p")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		if (MYW.topress == "a")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		if (MYW.topress == "s")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		if (MYW.topress == "d")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::F))
	{
		if (MYW.topress == "f")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::G))
	{
		if (MYW.topress == "g")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::H))
	{
		if (MYW.topress == "h")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::J))
	{
		if (MYW.topress == "j")
		{
			MYW.list.pop_front();
			MYW.score++;
		}

	}
	if (Keyboard::isKeyPressed(Keyboard::K))
	{
		if (MYW.topress == "k")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::L))
	{
		if (MYW.topress == "l")
		{
			MYW.list.pop_front();
			MYW.score++;
		}

	}
	if (Keyboard::isKeyPressed(Keyboard::Z))
	{
		if (MYW.topress == "z")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::X))
	{
		if (MYW.topress == "x")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::C))
	{
		if (MYW.topress == "c")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::V))
	{
		if (MYW.topress == "v")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::B))
	{
		if (MYW.topress == "b")
		{
			MYW.list.pop_front();
			MYW.score++;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::N))
	{
		if (MYW.topress == "n")
		{
			MYW.list.pop_front();
			MYW.score++;
		}

	}
	if (Keyboard::isKeyPressed(Keyboard::M))
	{
		if (MYW.topress == "m")
		{
			MYW.list.pop_front();
			MYW.score++;
		}

	}

}

