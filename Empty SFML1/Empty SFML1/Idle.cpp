/// <summary>
/// @Author Martin Farrell c00157047
/// Date: Nov 8th 2017
/// Num of hrs: 3
/// </summary>
/// No known bugs
#include"Idle.h"
#include<iostream>
using namespace std;

void Idle::jumping(Animation* a)//function accepts pointer argument and sets state to idle after outputting jump in the command line
{
	cout << "Jumping" << endl;
	a->setCurrent(new Idle());//uses stack memory
	delete this;//deletes new iteration on the stack after use
}
void Idle::climbing(Animation* a)//function accepts pointer argument and sets state to idle after outputting climb in the command line
{
	cout << "Climbing" << endl;
	a->setCurrent(new Idle());//uses stack memory
	delete this;//deletes new iteration on the stack after use
}

void Idle::swordsmanship(Animation * a)
{
	cout << "Swordsmanship" << endl;
	a->setCurrent(new Idle());//uses stack memory
	delete this;//deletes new iteration on the stack after use
}

void Idle::shovelling(Animation * a)
{
	cout << "Shovelling" << endl;
	a->setCurrent(new Idle());//uses stack memory
	delete this;//deletes new iteration on the stack after use
}

void Idle::hammering(Animation * a)
{
	cout << "Hammering" << endl;
	a->setCurrent(new Idle());//uses stack memory
	delete this;//deletes new iteration on the stack after use
}
