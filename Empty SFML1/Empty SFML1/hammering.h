#pragma once
/// <summary>
/// @Author Martin Farrell c00157047
/// Date: Nov 8th 2017
/// Num of hrs: 3
/// </summary>
/// No known bugs
#include"State.h"
#include"Animation.h"
#include"Idle.h"

class Hammering : public State
{
public:
	Hammering() {};//constructor
	~Hammering() {};//destructor
	void idle(Animation* a)
	{
		cout << "Going from Swording to Idling" << endl;//output to command line
		a->setCurrent(new Idle());//sets current state to idle using stack 
		delete this;//prevents memory leak
	}
};

