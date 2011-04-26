#include "Item.h"
#include <string>
#include <algorithm>

using namespace std;

Item::Item(string desc) {
	description = desc;
}
string Item::getDesc() {
	return description;
};

void Item::addInteractableItem(Item i){
	interactableItems.push_back(i);
};

bool Item::canInteractWithItem(Item i){
	for(int n = 0; n < interactableItems.size();n++){
		if(interactableItems.at(n).getDesc() == i.getDesc()){
			return true;
		}
	}
	return false;
	//return(find(interactableItems.begin(), interactableItems.end(), i)
	//	!= interactableItems.end());
};