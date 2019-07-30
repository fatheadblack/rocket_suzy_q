#include "Vect2f.h"


Vect2f::Vect2f(float a, float b)
{

	x = a;
	y = b;

}

void Vect2f::set_x(float a)
{

	x = a;

}

void Vect2f::set_y(float b)
{

	y = b;

}

float Vect2f::get_x()
{

	return x;
}

float Vect2f::get_y()
{

	return y;
}
