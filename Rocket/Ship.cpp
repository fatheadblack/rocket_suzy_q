#include<iostream>
#include "Ship.h"





Ship::Ship()
{

	mass = 0.f;
	thrust = 0.f;
	fuel = 0.f;
	height = 0.f;

	Vect2f position;
	Vect2f direction;
	Vect2f velocity;


	std::cout << "ship default constructor" << std::endl;


}



Ship::Ship(Vect2f vec) : Ship()
{
	std::cout << "ship vect2 constructor" << std::endl;
	position = vec;

}



void Ship::set_mass(float x)
{

	mass = x;


}
void Ship::set_velocity(float x, float y)
{

	velocity.set_x(x);

	velocity.set_y(y);

}

void Ship::set_direction(float i, float j)
{
	direction.set_x(i);
	direction.set_y(i);

}

void Ship::set_position(float a, float b)
{

	position.set_x(a);
	position.set_y(b);

}


void Ship::set_height(float h)
{

	height = h;
}




float Ship::get_mass()

{

	return mass;

}

Vect2f Ship::get_velocity()
{

	return velocity;

}

Vect2f Ship::get_direction()
{

	return direction;

}




Vect2f Ship::get_position()
{

	return position;


}

float Ship::get_height()
{

	return height;

}

void Ship::show_position()
{

	std::cout << " Ships x position : " << position.get_x() << " Ships y position : " << position.get_y() << std::endl;

}