#include "Game.h"
#include "WinUnit.h"


Player p = Player("tyler");
View v;

Game g = Game(p, v);

BEGIN_TEST(testGameCreatePlayer) 
{

    WIN_ASSERT_EQUAL(g.getPlayer().getPlayerName(), "tyler");
}
END_TEST

    
BEGIN_TEST(testGameCreateView) 
{

   // WIN_ASSERT_EQUAL(v, g.getCurrentView());
}
END_TEST

BEGIN_TEST(testMuteGame1) 
{

    WIN_ASSERT_EQUAL(false,g.isGameMuted());
}
END_TEST

BEGIN_TEST(testMuteGame2) 
{
    g.muteGame();
    WIN_ASSERT_EQUAL(true,g.isGameMuted());
}
END_TEST

BEGIN_TEST(testMuteGame3) 
{
    g.unMuteGame();
    WIN_ASSERT_EQUAL(false,g.isGameMuted());
}
END_TEST


BEGIN_TEST(testPauseGame1) 
{

    WIN_ASSERT_EQUAL(false,g.isGamePaused());
}
END_TEST

BEGIN_TEST(testPauseGame2) 
{
    g.pauseGame();
    WIN_ASSERT_EQUAL(true,g.isGamePaused());
}
END_TEST

BEGIN_TEST(testPauseGame3) 
{
    g.unPauseGame();
    WIN_ASSERT_EQUAL(false,g.isGamePaused());
}
END_TEST
