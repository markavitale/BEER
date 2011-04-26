
  
#include "WinUnit.h"
#include "Beer\Beer\Item.h"
#include <string>


Item i1 = Item("Item 1");
Item i2 = Item("Item 2");
Item i3 = Item("Item 3");
Item i4 = Item("Item 4");

BEGIN_TEST(testGetShortDescription)
  {
	string s = "short description";
 	Item newItem = Item(s);
	WIN_ASSERT_EQUAL(s, newItem.getDesc());
  }
 END_TEST

BEGIN_TEST(testGetLongDescription)
  {
	string s = "This is an example of a really really long description. Our descriptions will be shorter than this so this is a good way to test they will all work!";
 	Item newItem = Item(s);
	WIN_ASSERT_EQUAL(s, newItem.getDesc());
  }
 END_TEST
 
BEGIN_TEST(testIsInteractable0)
 {
	i1.addInteractableItem(i2);
	i1.addInteractableItem(i3);
	i2.addInteractableItem(i1);
	i2.addInteractableItem(i4);
	i3.addInteractableItem(i1);
	i4.addInteractableItem(i2);

	WIN_ASSERT_TRUE(i1.canInteractWithItem(i2));
 }
 END_TEST

BEGIN_TEST(testIsInteractable1)
 {
	 WIN_ASSERT_TRUE(i1.canInteractWithItem(i3));
 }
 END_TEST

BEGIN_TEST(testIsInteractable2)
 {
	 WIN_ASSERT_FALSE(i1.canInteractWithItem(i4));
 }
 END_TEST

BEGIN_TEST(testIsInteractable3)
 {
	 WIN_ASSERT_FALSE(i1.canInteractWithItem(i4));
 }
 END_TEST
BEGIN_TEST(testIsInteractable4)
 {
	 WIN_ASSERT_TRUE(i2.canInteractWithItem(i4));
 }
 END_TEST