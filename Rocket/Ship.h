#pragma once

#include "Vect2f.h"

class Ship {



private:
	float mass;
	float velocity;
	float thrust;

	Vect2f position;


public:

	Ship(Vect2f vec);

	void set_mass(float x);
	void set_velocity(float x);
	float get_mass();
	float get_velocity();
	Vect2f get_position();



};