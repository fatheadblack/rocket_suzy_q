#pragma once

#include "Vect2f.h"

class Ship {



private:
	float mass;
	float velocity;
	float thrust;
	float fuel;

	Vect2f position;


public:

	Ship() = default;
	Ship(Vect2f vec);

	void set_mass(float x);
	void set_velocity(float x);
	float get_mass();
	float get_velocity();
	void set_position(float a, float b);
	Vect2f get_position();
	void show_position();



};