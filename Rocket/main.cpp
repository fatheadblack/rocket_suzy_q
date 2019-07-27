#include<iostream>
#include<cmath>
#include "Ship.h"
#include "World.h"

#define G 6.67408E-11f
#define PI 3.1515926535


int main() {



	Vect2f pos(10.f, 20.f);
	

	Ship Suzy_q(pos);


	World earth;
	World moon;

	float g_earth;
	float g_moon;

	float earth_escv;
	float moon_escv;

	float earth_vol;


	earth.mass = 5.97E24f;
	moon.mass = 7.35E22f;
	earth.radius = 6.378E6f;
	moon.radius = 1737000.f;


	g_earth = (G * earth.mass) / (earth.radius * earth.radius);

	g_moon = (G * moon.mass) / (moon.radius * moon.radius);

	earth_escv = std::sqrt((2 * G * earth.mass / earth.radius));

	moon_escv = std::sqrt((2 * G * moon.mass / moon.radius));

	earth_vol = ((4.f / 3.f) * PI) * (earth.radius * earth.radius * earth.radius);


	std::cout << "acceleration due to gravity on surface of EARTH: " << g_earth << " m s^-2 " << std::endl;
	std::cout << "acceleration due to gravity on surface of MOON: " << g_moon << " m s^-2 " << std::endl;

	std::cout << "escape velocity on earth " << earth_escv << " m s^-1 " << std::endl;
	std::cout << "escape velocity on moon " << moon_escv << " m s^-1 " << std::endl;


	std::cout << "volume of the earth " << earth_vol << std::endl;

	

	for (int i = 0; i < 100; i++)
	{

		//std::cout << Suzy_q.get_position() << " " << Suzy_q.get_position() << std::endl;
	}


	std::cin.get();

	return 0;

}