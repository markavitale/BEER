#include "Game.h"
#include <Windows.h>
class Launcher {
	public:
		Launcher ();
	private: 
		// Window gameWindow;  need to look into how to actually do this, link here http://www.bluesfear.com/tutorials/C%2B%2Bwindow_p1.php
		Game game;
		void launchGame();
};