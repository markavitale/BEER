
  
#include "WinUnit.h"
#include "Beer\Beer\Item.h"
#include <string>


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