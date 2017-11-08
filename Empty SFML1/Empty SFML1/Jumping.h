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

class Jumping : public State
{
public:
	Jumping() {};//constructor
	~Jumping() { };//destructor
};

