#include <string>

class Item {
	public:
		Item (std::string desc, Item itemList[]);

	private:
		static std::string decription;
		static Item interactableItems[];


};