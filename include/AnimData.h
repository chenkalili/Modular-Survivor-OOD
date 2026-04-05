#pragma once
using std::vector;

typedef enum
{
	e_ride,
	e_jump,
	e_bend,
	e_apear,
	e_spin,
	e_stay,
	e_max_act,
} Action;

struct AnimationData
{
	vector <vector <sf::IntRect>> m_animationData;
};

typedef enum 
{
	e_player,
	e_coin,
	e_max,
}objects;