#pragma once

#include "Vect2f.h"

class Ship {



private:
	float mass;
	float thrust;
	float fuel;
	float height;

	Vect2f position;
	Vect2f direction;
	Vect2f velocity;

public:

	Ship() = default;
	Ship(Vect2f vec);

	void set_mass(float x);
	void set_velocity(float x, float y);
	void set_position(float a, float b);
	void set_direction(float i, float j);
	void set_height(float h);

	void show_position();

	float get_mass();
	float get_height();

	Vect2f get_velocity();
	Vect2f get_position();
	Vect2f get_direction();




};