#pragma once
/// <summary>
/// @Author Martin Farrell c00157047
/// Date: Nov 8th 2017
/// Num of hrs: 3
/// </summary>
/// No known bugs

class Animation
{
	class State* current;//pointer for states
public:
	Animation();//constructor
	void setCurrent(State* s)//function for setting state utilizing the pointer
	{
		current = s;//sets state to the state it's pointing to
	}
	void idle();//sets state to idle
	void jumping();//sets state to jumping
	void climbing();//sets state to climbing
	void swordsmanship();//sets state to sword
	void shovelling();
	void hammering();

};

