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
using namespace std;

class Idle : public State
{
public:
	Idle() {};//constructor
	~Idle() {};//destructor
	void jumping(Animation* a);//function accepts pointer argument and sets state to idle after outputting jump in the command line
	void climbing(Animation* a);//function accepts pointer argument and sets state to idle after outputting climb in the command line
	void swordsmanship(Animation* a);//function accepts pointer argument and sets state to idle after outputting sword in the command line
	void shovelling(Animation* a);//function accepts pointer argument and sets state to idle after outputting shovel in the command line
	void hammering(Animation* a);//function accepts pointer argument and sets state to idle after outputting hammer in the command line
};

