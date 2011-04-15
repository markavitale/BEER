#include "Beer\Beer\Game.h"
#include "WinUnit.h"


Player p = Player("tyler");
View v[10];
v[0] = View();
Game g = Game(p, v);

BEGIN_TEST(testGameCreatePlayer) 
{

    WIN_ASSERT_EQUAL("tyler",g.getPlayer());
}
END_TEST

    
BEGIN_TEST(testGameCreateView) 
{

    WIN_ASSERT_EQUAL(v[0], g.getCurrentView());
}
END_TEST

    BEGIN_TEST(testMuteGame1) 
{

    WIN_ASSERT_EQUAL(false,g.isMuted());
}
END_TEST

        BEGIN_TEST(testMuteGame2) 
{
    g.muteGame();
    WIN_ASSERT_EQUAL(false,g.isMuted());
}
END_TEST

    END_TEST

    BEGIN_TEST(testPauseGame1) 
{

    WIN_ASSERT_EQUAL(false,g.isPaused());
}
END_TEST

BEGIN_TEST(testPauseGame2) 
{
    g.pauseGame();
    WIN_ASSERT_EQUAL(false,g.isPaused());
}
END_TEST
