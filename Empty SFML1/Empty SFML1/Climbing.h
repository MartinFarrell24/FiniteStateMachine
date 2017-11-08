#pragma once
/// <summary>
/// @Author Martin Farrell c00157047
/// Date: Nov 8th 2017
/// Num of hrs: 3
/// </summary>
/// No known bugs
#include<iostream>
#include"State.h"
#include"Animation.h"
#include"Idle.h"
using namespace std;
class Climbing : public State
{
public:
	Climbing() {};//constructor
	~Climbing() {};//destructor
	void idle(Animation* a)
	{
		cout << "Going from Climbing to Idling" << endl;//output to command line
		a->setCurrent(new Idle());//sets current state to idle using stack 
		delete this;//prevents memory leak
	}
};

