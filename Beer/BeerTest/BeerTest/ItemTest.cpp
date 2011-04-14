
  
  #include "WinUnit.h"
	#include "Beer\Beer\Item.h"



BEGIN_TEST(ItemTest)
  {
 
	Item newItem = Item("random letters");
	WIN_ASSERT_EQUAL("random letters", newItem.getDesc());
  }
  END_TEST