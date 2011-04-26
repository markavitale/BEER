#include "Game.h"
#include <string>
using namespace std;

Game::Game(Player p, View currentV) {
	currentPlayer = p;
	currentView = currentV;
	isMuted = false;
	isPaused = false;
};

Player Game::getPlayer() {
	return currentPlayer;
}

View Game::getCurrentView() {
	return currentView;
}

bool Game::isGameMuted() {
	return isMuted;
}

bool Game::isGamePaused() {
	return isPaused;
}

void Game::muteGame() {
	isMuted = true;
}

void Game::unMuteGame() {
	isMuted = false;
}

void Game::pauseGame() {
	isPaused = true;
}

void Game::unPauseGame() {
	isPaused = false;
}
