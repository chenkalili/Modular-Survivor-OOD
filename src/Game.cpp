#include "Game.h"

void Game::run()
{
    m_level.init();
    m_level.run();
    //m_toolBar.runMenu(*this, m_currLevel);
}

////-------------------------------------------
////הפונקציה אחראית לריצת המשחק, שלב אחר שלב
//void Game::runGame()
//{
//    while (m_currLevel <= m_numOfLevel)
//    {
//        Level level;
//        level.init(NumOfLevel(level));
//        level.run();
//        if (level.getWin())
//        {
//            m_currLevel++;
//            Graphic::graphic().playSound(WIN_SOUND);
//            sf::sleep(sf::Time(sf::seconds(1)));
//            announcement(NEXT_LEVEL_PIC);
//        }
//        else if (Graphic::graphic().getWin().isOpen())
//        {
//            Graphic::graphic().playSound(FAIL_SOUND);
//            sf::sleep(sf::Time(sf::seconds(4)));
//            announcement(TIME_OVER_PIC);
//            return;
//        }
//        else
//            return;
//    }
//}
// 
////-------------------------------------------------------------------
////הפונקציה מחזירה את שם השלב
//std::string Game::NumOfLevel(Level & level)
//{
//    if (m_currLevel <= m_numOfLevel)
//    {
//        std::string levelName = "level" + std::to_string(m_currLevel) + ".txt";
//        level.getInform().init("level  " + std::to_string(m_currLevel));
//        return levelName;
//    }
//    return "no more level";
//}
//
////------------------------------------------------------------------------------
////הפונקציה מוציאה הודעה לשחקן כאשר ניצח או הפסיד
//void Game::announcement(int i)
//{
//    sf::Sprite win;
//    win.setTexture(Graphic::graphic().getPic(i));
//    Graphic::graphic().getWin().draw(win);
//    Graphic::graphic().getWin().display();
//    sf::sleep(sf::Time(sf::seconds(3)));
//    Graphic::graphic().getWin().clear();
//}
