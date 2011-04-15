#include "Player.h"

Player::Player(string playerN) {
	playerName = playerN;
	clickCount = 0;
	actualArraySize= 0;
};

void Player::increaseClickCount() {
	clickCount ++;
};

bool Player::hasItem(Item theItem){
	//for (int i = 0; i < actualArraySize; i++) {
	//	if (inventory[i] == theItem) {		//need to write and Item.equals(Item) method
	//		return true;
	//	};
//	};
	return false;
}

void Player::addItem(Item a) {
//	inventory[actualArraySize] = a;
	actualArraySize ++;
}
void Player::combineItems(Item a, Item b) {
	
}

string Player::getPlayerName() {

	return playerName;
};

int Player::getClickCount() {

	return clickCount;
};