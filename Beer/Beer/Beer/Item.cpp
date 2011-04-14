#include "Item.h"
#include <string>
using namespace std;

Item::Item(string desc, Item itemList[]) {
	description = desc;
	//for (int i = 0; i<25; i++) {
//		interactableItems[i] = itemList[i];
//	};

	//interactableItems = itemList; // "Like printing arrays, there is no single statement in the language that says "copy an entire array into another array". The array elements must be copied individually."
};
Item::Item(string desc) {
	description = desc;
}
string Item::getDesc() {
	return description;
};