#pragma once


class Vect2f
{

public:

	float x, y; // x and y co-ordinates

	Vect2f() = default;

	Vect2f(float a, float b);

	void set_x(float a);
	void set_y(float b);

	float get_x();
	

	float get_y();



};
