#include "Player.h"
#include "View.h"

class Game {
	public:
		Game (Player p, View currentV); 
		bool isMuted;
		bool isPaused;
		Player getPlayer();
		View getCurrentView();
		bool isGamePaused();
		bool isGameMuted();
		void pauseGame ();
		void muteGame ();
		void unPauseGame ();
		void unMuteGame ();

	private:
		Player currentPlayer;
		View currentView;
		View* getPossibleMoves();
		
		void changeView (View v);
		
		void draw ();
};