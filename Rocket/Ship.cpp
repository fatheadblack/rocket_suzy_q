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

Vect2f Ship::get_position()
{

	return position;


}