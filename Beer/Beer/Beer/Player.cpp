#include "Player.h"

Player::Player(string playerN) {
	playerName = playerN;
	clickCount = 0;
	actualArraySize= 0;
};

Player::Player() {
	playerName = "Player";
	clickCount = 0;
	actualArraySize= 0;
};

void Player::increaseClickCount() {
	clickCount ++;
};

bool Player::hasItem(Item i){
	for(int n = 0; n < inventory.size();n++){
		if(inventory.at(n).getDesc() == i.getDesc()){
			return true;
		}
	}
	return false;
}

void Player::addItem(Item i) {
	inventory.push_back(i);
}
void Player::combineItems(Item a, Item b) {
	
}

string Player::getPlayerName() {

	return playerName;
};

int Player::getClickCount() {

	return clickCount;
};