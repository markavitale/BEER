#include <string>
using namespace std;

class Item {
	public:
		Item (string desc, Item itemList[]);
		Item (string desc);
		string getDesc();
		bool canInteractWithItem(Item i);
		void setInteractable(Item i[]);
	private:
		string description;
		static Item interactableItems[25];// have to set arbitrary size



};