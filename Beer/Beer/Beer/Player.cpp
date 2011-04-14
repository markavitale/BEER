#include "Player.h"

Player::Player(string playerN) {
	playerName = playerN;
	clickCount = 0;
	inventory = new Item[10];
};

void Player::increaseClickCount() {
	clickCount ++;
};

bool Player::hasItem(Item i){
	return false;
}

void Player::combineItems(Item a, Item b) {
	
}

string Player::getPlayerName() {

	return playerName;
};

int Player::getClickCount() {

	return clickCount;
};