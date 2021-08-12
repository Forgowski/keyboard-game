#include "Header.h"

int main()
{
	config();
	
		while (MYW.W.isOpen())
		{
			while (MYW.W.pollEvent(MYW.e))
			{
				if (MYW.checkclose())MYW.W.close();
				lvl();
			}
			MYW.clean();
			configdraw();
			whichkey();
			restart();
			if (MYW.configstatus == 1)
			{
				MYW.ifsteps();
				MYW.Draw();
			}
				MYW.W.display();
				MYW.steps++;
			
		}
	
	return 0;
}