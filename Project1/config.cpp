#include "Header.h"
void config()
{
	MYW.header.setFont(MYW.ttf);
	MYW.header.setString("Choose speed lvl");
	MYW.header.setCharacterSize(20);
	MYW.header.setPosition(20, 40);

	MYW.lvl1.setFont(MYW.ttf);
	MYW.lvl1.setString("1.Beginner");
	MYW.lvl1.setCharacterSize(20);
	MYW.lvl1.setPosition(20, 80);

	MYW.lvl2.setFont(MYW.ttf);
	MYW.lvl2.setString("2.Junior");
	MYW.lvl2.setCharacterSize(20);
	MYW.lvl2.setPosition(20, 120);

	MYW.lvl3.setFont(MYW.ttf);
	MYW.lvl3.setString("3.Proffesional");
	MYW.lvl3.setCharacterSize(20);
	MYW.lvl3.setPosition(20, 160);

	MYW.lvl4.setFont(MYW.ttf);
	MYW.lvl4.setString("4.expert");
	MYW.lvl4.setCharacterSize(20);
	MYW.lvl4.setPosition(20, 200);

	MYW.lvl5.setFont(MYW.ttf);
	MYW.lvl5.setString("5.Hardcore");
	MYW.lvl5.setCharacterSize(20);
	MYW.lvl5.setPosition(20, 240);



}
void configdraw()
{
	if (MYW.configstatus == 0)
	{
		if (MYW.lvl1.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))MYW.lvl1.setFillColor(Color::Red);
		if (MYW.lvl2.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))MYW.lvl2.setFillColor(Color::Red);
		if (MYW.lvl3.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))MYW.lvl3.setFillColor(Color::Red);
		if (MYW.lvl4.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))MYW.lvl4.setFillColor(Color::Red);
		if (MYW.lvl5.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))MYW.lvl5.setFillColor(Color::Red);
		MYW.W.draw(MYW.header);
		MYW.W.draw(MYW.lvl1);
		MYW.W.draw(MYW.lvl2);
		MYW.W.draw(MYW.lvl3);
		MYW.W.draw(MYW.lvl4);
		MYW.W.draw(MYW.lvl5);
		MYW.lvl1.setFillColor(Color::White);
		MYW.lvl2.setFillColor(Color::White);
		MYW.lvl3.setFillColor(Color::White);
		MYW.lvl4.setFillColor(Color::White);
		MYW.lvl5.setFillColor(Color::White);
	}
}
void lvl()
{
	if (MYW.configstatus == 0)
	{
		if (MYW.e.type == Event::MouseButtonPressed && MYW.e.mouseButton.button == Mouse::Left)
		{
			if (MYW.lvl1.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))
			{
				MYW.lvl = 120;
				MYW.configstatus = 1;
			}
			if (MYW.lvl2.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))
			{
				MYW.lvl = 90;
				MYW.configstatus = 1;
			}
			if (MYW.lvl3.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))
			{
				MYW.lvl = 60;
				MYW.configstatus = 1;
			}
			if (MYW.lvl4.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))
			{
				MYW.lvl = 45;
				MYW.configstatus = 1;
			}
			if (MYW.lvl5.getGlobalBounds().contains(Vector2f(Mouse::getPosition(MYW.W))))
			{
				MYW.lvl = 30;
				MYW.configstatus = 1;
			}
		}
	}
}
