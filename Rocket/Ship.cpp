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