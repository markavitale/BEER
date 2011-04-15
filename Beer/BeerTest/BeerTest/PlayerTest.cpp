#include "WinUnit.h"
#include "Beer\Beer\Player.h"

string s = "Tyler";
Player newPlayer = Player(s);
Item item = Item("item");
Item item2 = Item("item 2");

BEGIN_TEST(testPlayerName) 
{

	WIN_ASSERT_EQUAL(s, newPlayer.getPlayerName());
}
END_TEST
BEGIN_TEST(testPlayerClickCount0) 
{

	WIN_ASSERT_EQUAL(0, newPlayer.getClickCount());
}
END_TEST

BEGIN_TEST(testPlayerClickCount1) 
{
	newPlayer.increaseClickCount();
	WIN_ASSERT_EQUAL(1, newPlayer.getClickCount());
}
END_TEST

BEGIN_TEST(testPlayerClickCount10) 
{
	for (int i = 0; i <9; i++) {
		newPlayer.increaseClickCount();
	};
	WIN_ASSERT_EQUAL(10, newPlayer.getClickCount());
}
END_TEST

BEGIN_TEST(testInventory1)
{
	newPlayer.addItem(item);
	WIN_ASSERT_TRUE(newPlayer.hasItem(item));
}
END_TEST

BEGIN_TEST(testInventory2)
{
	WIN_ASSERT_FALSE(newPlayer.hasItem(item2));
}
END_TEST