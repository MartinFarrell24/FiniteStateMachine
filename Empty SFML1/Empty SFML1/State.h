#pragma once
/// <summary>
/// @Author Martin Farrell c00157047
/// Date: Nov 8th 2017
/// Num of hrs: 3
/// </summary>
/// No known bugs
#include<iostream>
#include"Animation.h"
using namespace std;

class State
{
public:
	virtual void idle(Animation* a)
	{
		cout << "State::Idling" << endl;
	}

	virtual void jumping(Animation* a)
	{
		cout << "State::Jumping" << endl;
	}

	virtual void climbing(Animation* a)
	{
		cout << "State::Climbing" << endl;
	}

	virtual void swordsmanship(Animation* a)
	{
		cout << "State::Swordsmanship" << endl;
	}

	virtual void shovelling(Animation* a)
	{
		cout << "State::Swordsmanship" << endl;
	}

	virtual void hammering(Animation* a)
	{
		cout << "State::Swordsmanship" << endl;
	}
};


