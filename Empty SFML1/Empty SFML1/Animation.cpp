/// <summary>
/// @Author Martin Farrell c00157047
/// Date: Nov 8th 2017
/// Num of hrs: 3
/// </summary>
/// No known bugs
#include"Animation.h"
#include"Idle.h"

Animation::Animation()//constructor
{
	current = new Idle();
}

void Animation::idle()//sets state to idle
{
	current->idle(this);
}

void Animation::jumping()//sets state to jumping
{
	current->jumping(this);
}

void Animation::climbing()//sets state to climbing
{
	current->climbing(this);
}

void Animation::swordsmanship()
{
	current->swordsmanship(this);
}

void Animation::shovelling()
{
	current->shovelling(this);
}

void Animation::hammering()
{
	current->hammering(this);
}
