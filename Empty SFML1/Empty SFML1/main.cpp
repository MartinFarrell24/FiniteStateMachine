/// <summary>
/// @Author Martin Farrell c00157047
/// Date: Nov 8th 2017
/// Num of hrs: 3
/// </summary>
/// No known bugs

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

#include"State.h"
#include"Animation.h"
#include<thread>
#include<chrono>
#include <ctime>
#include"SFML\Graphics.hpp"



/// <summary>
/// main enrtry point
/// </summary>
/// <returns>zero</returns>
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Finite State Machines!!");//window used to draw sprites that represent gamestate
	sf::Texture m_texture[6];//textures for gamestates
	sf::Sprite m_sprite[6];//sprites used to draw the textures in the window
	srand(time(nullptr));//used to generate random state after idling

	if (!m_texture[0].loadFromFile("jump.png"))//loads texture into the first cell of the array
	{
		// error...
	}
	m_sprite[0].setTexture(m_texture[0]);//assigns first texture to first sprite in sprite array

	if (!m_texture[1].loadFromFile("climbing.jpg"))//loads texture into the 2nd cell of the array
	{
		// error...
	}
	m_sprite[1].setTexture(m_texture[1]);//assigns 2nd texture to 2nd sprite in sprite array

	if (!m_texture[2].loadFromFile("idle.png"))//loads texture into the 3rd cell of the array
	{
		// error...
	}
	m_sprite[2].setTexture(m_texture[2]);//assigns 3rd texture to 3rd sprite in sprite array

	if (!m_texture[3].loadFromFile("sword.jpg"))//loads texture into the 4th cell of the array
	{
		// error...
	}
	m_sprite[3].setTexture(m_texture[3]);//assigns 4th texture to 4th sprite in sprite array

	if (!m_texture[4].loadFromFile("hammer.jpg"))//loads texture into the 5th cell of the array
	{
		// error...
	}
	m_sprite[4].setTexture(m_texture[4]);//assigns 5th texture to 5th sprite in sprite array

	if (!m_texture[5].loadFromFile("shovel.jpg"))//loads texture into the 6th cell of the array
	{
		// error...
	}
	m_sprite[5].setTexture(m_texture[5]);//assigns 6th texture to 6th sprite in sprite array


	Animation fsm; int i = 0;//creates an object of tpye animation and an integer used to change between states

	
	sf::Clock clock; //used for game loop

	const float FPS = 60.0f;
	const sf::Time timePerFrame = sf::seconds(1.0f / 60.0f);
	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	clock.restart();

	while (window.isOpen())
	{

		//read keyboard inout
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}



		//get the time since last update and restart the clock
		timeSinceLastUpdate += clock.restart();
		//update every 60th of a second
		if (timeSinceLastUpdate > timePerFrame)
		{
			 while (true) {//infinite loop
				if (i == 0) {
					fsm.jumping();
					window.clear();
					window.draw(m_sprite[0]);//draws jumping sprite
					window.display();
					std::this_thread::sleep_for(std::chrono::milliseconds(1000));
					
					i = 2;//change to idling
				}
				else if (i == 1)
				{
					fsm.climbing();
					window.clear();
					window.draw(m_sprite[1]);
					window.display();
					std::this_thread::sleep_for(std::chrono::milliseconds(1000));
					
					i = 2;//change to idling
				}
				else if (i == 2)
				{
					fsm.idle();
					window.clear();
					window.draw(m_sprite[2]);
					window.display();
					std::this_thread::sleep_for(std::chrono::milliseconds(1000));
					int num = rand() % 6;//generate a random num between 0-5
					if (num == 2)
					{
						num++;//if state is idle again increment
					}
					i = num;
				}
				else if (i == 3)
				{
					fsm.swordsmanship();
					window.clear();
					window.draw(m_sprite[3]);
					window.display();
					std::this_thread::sleep_for(std::chrono::milliseconds(1000));
					i = 2;
				}
				else if (i == 4)
				{
					fsm.hammering();
					window.clear();
					window.draw(m_sprite[4]);
					window.display();
					std::this_thread::sleep_for(std::chrono::milliseconds(1000));
					i = 2;
				}
				else if (i == 5)
				{
					fsm.shovelling();
					window.clear();
					window.draw(m_sprite[5]);
					window.display();
					std::this_thread::sleep_for(std::chrono::milliseconds(1000));
					i = 2;
				}
			}

			timeSinceLastUpdate = sf::Time::Zero;
		}
	}
}