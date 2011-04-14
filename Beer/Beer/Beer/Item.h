#include <string>
using namespace std;

class Item {
	public:
		Item (std::string desc, Item itemList[]);
		Item (std::string desc);
		string getDesc();
		bool canInteractWithItem(Item i);
	private:
		string description;
	//	static Item interactableItems[25];// have to set arbitrary size



};