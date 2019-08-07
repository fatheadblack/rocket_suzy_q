#include<iostream>
#include<cmath>
#include "Ship.h"
#include "World.h"

#define G 6.67408E-11f
#define PI 3.1515926535f


int main() {


	float a = 0;
	float b = 0;
	Vect2f pos(10.f, 20.f);
	
	// for temporary height equation
	float dt = 0.0f;
	float height = 0;

	// for temporay velocity equation
	float vel = 0;

	// for second height equation

	float height_check = 0;
	float height_check_u = 0;
	float height_check_v = 0;


	//height = vt - -.5f * vt^2

	//Ship suzy_q;
	Ship temp(pos);


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
		height_check_u = vel;
		vel += 2.0f * dt;
		height_check_v = vel;

		height_check = (height_check_u + height_check_v) / 2  * dt;

		height = (vel * dt) - (0.5 * 2.0 * (dt * dt));

		//suzy_q.set_velocity(0,vel);
		//suzy_q.set_height(height);

		dt += 0.5;

		//std::cout << "Velocity of Suzy_q : " << suzy_q.get_velocity().get_y() << " Height of Suzy_q : " << suzy_q.get_height() << std::endl;

		std::cout << "Height Check : " << height_check << std::endl;

		//std::cout << "Check for random values : "  << suzy_q.get_mass() << " " << suzy_q.get_direction().get_x() << std::endl;

		/*a += i + 2;
		b += i + 3;
		suzy_q.set_position(a, b);
		suzy_q.show_position();*/

		std::cout << temp.get_mass() << " " << temp.get_direction().get_x() << " " << temp.get_position().get_y() << std::endl;

	}


	std::cin.get();

	return 0;

}