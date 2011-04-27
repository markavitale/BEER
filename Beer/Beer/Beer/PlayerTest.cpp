#include "WinUnit.h"
#include "Player.h"

string s = "Tyler";
Player newPlayer = Player(s);
Item item = Item("item");
Item item2 = Item("item 2");

BEGIN_TEST(PlayerTestPlayerName) 
{

	WIN_ASSERT_EQUAL(s, newPlayer.getPlayerName());
}
END_TEST
BEGIN_TEST(PlayerTestPlayerClickCount0) 
{

	WIN_ASSERT_EQUAL(0, newPlayer.getClickCount());
}
END_TEST

BEGIN_TEST(PlayerTestPlayerClickCount1) 
{
	newPlayer.increaseClickCount();
	WIN_ASSERT_EQUAL(1, newPlayer.getClickCount());
}
END_TEST

BEGIN_TEST(PlayerTestPlayerClickCount10) 
{
	for (int i = 0; i <9; i++) {
		newPlayer.increaseClickCount();
	};
	WIN_ASSERT_EQUAL(10, newPlayer.getClickCount());
}
END_TEST

BEGIN_TEST(PlayerTestInventory1)
{
	newPlayer.addItem(item);
	WIN_ASSERT_TRUE(newPlayer.hasItem(item));
}
END_TEST

BEGIN_TEST(PlayerTestInventory2)
{
	WIN_ASSERT_FALSE(newPlayer.hasItem(item2));
}
END_TEST