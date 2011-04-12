#include "Player.h"
#include "View.h"

class Game {
	public:
		Game (Player p, View currentV); 
		bool isMuted;
		bool isPaused;

	private:
		Player currentPlayer;
		View currentView;
		View* getPossibleMoves();
		void changeView (View v);
		void pauseGame ();
		void muteGame ();
		void draw ();
};