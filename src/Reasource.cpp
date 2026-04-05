#include "Reasource.h"
#include "Helper.h"

//------------------------------------------------------------------------------
//הפונקציה מאתחלת את גרפיקת המשחק
Reasource::Reasource()
{
    m_window.create(sf::VideoMode(WIN_X, WIN_Y, 32), "Save the king game",
        sf::Style::Titlebar | sf::Style::Close);
    LoadingPic();
    m_data.resize(e_max);
//    LoadinSound();
    m_font.loadFromFile("never.ttf");
    m_data[e_player] = PlayerData();
}

AnimationData Reasource::PlayerData()
{
    const auto size = sf::Vector2i(260, 230);
    const auto initSpace = sf::Vector2i(0, 0);
    const auto middleSpace = sf::Vector2i(0, 0);

    AnimationData player;
    player.m_animationData.resize(e_max_act);
    auto currentStart = initSpace;

    auto nextStart = [&]()
    {
        currentStart += middleSpace;
        currentStart.x += size.x;
        return currentStart;
    };

    player.m_animationData[e_ride].emplace_back(currentStart, size);
    for (int i = 0; i < 50; i++)
        player.m_animationData[e_ride].emplace_back(nextStart(), size);
    return player;
}
//------------------------------------
//הפונקציה מאפשרת מופע יחיד של המחלקה
Reasource& Reasource::reasource()
{
    static Reasource m_reasourceManagare;
    return m_reasourceManagare;
}

//------------------------------------------------------------------------------
//הפונקציה מחזירה את התמונה הרצויה 
sf::Texture& Reasource::getPic(int index)
{
    return m_texture[index];
}

////------------------------------------------------------------------------------
////הפונקציה מחזירה צליל של מוזיקה 
//sf::SoundBuffer& Graphic::getSound(int index)
//{
//    return m_soundBuffer[index];
//}

//------------------------------------------------------------------------------
//הפונקציה מחזירה את הפונט הרצוי
sf::Font& Reasource::getFont()
{
    return m_font;
}

//------------------------------------------------------------------------------
//הפונקציה מחזירה את חלון המשחק
sf::RenderWindow& Reasource::getWin()
{
    return m_window;
}

AnimationData& Reasource::animationData(objects object)
{
    return m_data[int(object)]; 
}

////------------------------------------------------------------------------------
////הפונקציה טוענת מוזיקה למשחק
//void Graphic::LoadinSound()
//{
//    auto sound = sf::SoundBuffer();
//    sound.loadFromFile("game.ogg");
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("cantMove.ogg");
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("win.ogg");
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("fail.ogg");
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("bottun.wav");
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("dropKey.wav"); //5
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("burnOff.wav");
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("openGates.wav");
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("takeKey.wav"); //8
//    m_soundBuffer.push_back(sound);
//    sound.loadFromFile("changePlayer.wav");
//    m_soundBuffer.push_back(sound);
//}
//
//------------------------------------------------------------------------------
//הפונקציה טוענת תמונות למשחק
void Reasource::LoadingPic()
{
    auto tex = sf::Texture();
    tex.loadFromFile("back1.jpg");
    m_texture.push_back(tex);
    tex.loadFromFile("back2.png");
    m_texture.push_back(tex);
    tex.loadFromFile("back3.png");
    m_texture.push_back(tex);
    tex.loadFromFile("back4.png");
    m_texture.push_back(tex);
    tex.loadFromFile("back5.png");
    m_texture.push_back(tex);
    tex.loadFromFile("back6.png");
    m_texture.push_back(tex);
    tex.loadFromFile("playerRide.png");
    m_texture.push_back(tex);
    
}