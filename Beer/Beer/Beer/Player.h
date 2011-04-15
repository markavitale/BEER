#include <string>
#include "Item.h"
using namespace std;

class Player {
	public:
		Player (std::string playerName);
		void increaseClickCount();
		bool hasItem(Item i);
		string getPlayerName();
		int getClickCount();
		void addItem(Item a);
	private: 
		void combineItems(Item a, Item b);
		Item inventory[10];
		int clickCount;
		string playerName;
		int actualArraySize;
};