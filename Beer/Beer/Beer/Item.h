#include <string>
using namespace std;

class Item {
	public:
		Item (string desc, Item itemList[]);
		Item (string desc);
		string getDesc();
	private:
		string description;
	//	static Item interactableItems[25];// have to set arbitrary size



};