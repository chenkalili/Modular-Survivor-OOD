#pragma once
#include "Helper.h"

class Animation
{
public:
    void init(AnimationData& data, Action act, int texNum);
    void update(sf::Time delta, Action act);
    void draw() { Reasource::reasource().getWin().draw(m_sprite); }
protected:
    sf::Clock m_aiTime;
private:
    void update();
    AnimationData* m_data;
    sf::Time m_elapsed = {};
    Action m_act;
    int m_index = 0;
    sf::Sprite m_sprite;
};
