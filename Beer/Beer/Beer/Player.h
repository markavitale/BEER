#include <string>
#include "Item.h"
#include <vector>
using namespace std;

class Player {
	public:
		Player (std::string playerName);
		Player ();
		void increaseClickCount();
		bool hasItem(Item i);
		string getPlayerName();
		int getClickCount();
		void addItem(Item a);
	private: 
		void combineItems(Item a, Item b);
		vector<Item> inventory;
		int clickCount;
		string playerName;
		int actualArraySize;
};