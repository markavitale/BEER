#include <string>
#include <vector>
using namespace std;

class Item {
	public:
		//Item (string desc, Item itemList[]);
		Item (string desc);
		string getDesc();
		bool canInteractWithItem(Item i);
		void addInteractableItem(Item i);
	private:
		string description;
		static vector<Item> interactableItems;


};