#include "Animation.h"

void Animation::init(AnimationData& data, Action act, int texNum)
{
    m_data = &data;
    m_act = act;
    m_sprite.setTexture(Reasource::reasource().getPic(texNum));
    m_sprite.setOrigin(0, m_sprite.getGlobalBounds().height);
    m_sprite.setPosition(185, 945);
    update();
}

void Animation::update(sf::Time delta, Action act)
{
    if (m_act != act && m_act != e_stay)
    {
        m_act = act;
        m_index = 0;
    }
    m_elapsed += delta;
    if (m_elapsed >= AnimationTime)
    {
        m_elapsed -= AnimationTime;
        ++m_index;
        m_index %= m_data->m_animationData[int(m_act)].size();
        update();
    }
}

void Animation::update()
{
    m_sprite.setTextureRect(m_data->m_animationData[int(m_act)][m_index]);
}
