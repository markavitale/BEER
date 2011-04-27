#include "Game.h"
#include "WinUnit.h"


Player p = Player("tyler");
View v;

Game g = Game(p, v);

BEGIN_TEST(GameTestGameCreatePlayer) 
{

    WIN_ASSERT_EQUAL(g.getPlayer().getPlayerName(), "tyler");
}
END_TEST

    
BEGIN_TEST(GameTestGameCreateView) 
{

   // WIN_ASSERT_EQUAL(v, g.getCurrentView());
}
END_TEST

BEGIN_TEST(GameTestMuteGame1) 
{

    WIN_ASSERT_FALSE(g.isGameMuted());
}
END_TEST

BEGIN_TEST(GameTestMuteGame2) 
{
    g.muteGame();
    WIN_ASSERT_TRUE(g.isGameMuted());
}
END_TEST

BEGIN_TEST(GameTestMuteGame3) 
{
    g.unMuteGame();
    WIN_ASSERT_FALSE(g.isGameMuted());
}
END_TEST


BEGIN_TEST(GameTestPauseGame1) 
{

    WIN_ASSERT_FALSE(g.isGamePaused());
}
END_TEST

BEGIN_TEST(GameTestPauseGame2) 
{
    g.pauseGame();
    WIN_ASSERT_TRUE(g.isGamePaused());
}
END_TEST

BEGIN_TEST(GameTestPauseGame3) 
{
    g.unPauseGame();
    WIN_ASSERT_FALSE(g.isGamePaused());
}
END_TEST
