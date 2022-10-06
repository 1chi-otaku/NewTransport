#pragma once
#include "Transport.h"
#include <iostream>
using namespace std;
class Ship: public Transport
{
	double load_capacity;   // Load capacity
	double bottom_deadrise; // The maximum bottom deadrise.
	char* ship_type; // Ship' type.
public:
	Ship();
	Ship(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Load, double Bottom, const char* ShipType);
	void Init();
	void Print()const;
	void Fuel()const;
	Ship(const Ship& obj);
	Ship& operator=(const Ship& obj);
	~Ship();
};

