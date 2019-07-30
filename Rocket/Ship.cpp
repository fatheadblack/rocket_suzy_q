#include<iostream>
#include "Ship.h"






Ship::Ship(Vect2f vec)
{

	position = vec;


}



void Ship::set_mass(float x)
{

	mass = x;


}
void Ship::set_velocity(float x)
{

	velocity = x;

}


float Ship::get_mass()

{

	return mass;

}
float Ship::get_velocity()
{

	return velocity;

}


void Ship::set_position(float a, float b)
{

	position.set_x(a);
	position.set_y(b);

}

Vect2f Ship::get_position()
{

	return position;


}

void Ship::show_position()
{

	std::cout << " Ships x position : " << position.get_x() << " Ships y position : " << position.get_y() << std::endl;

}