#pragma once
#include "Transport.h"
#include <iostream>
using namespace std;
class Ship: public Transport
{
	double load_capacity;   // Load capacity
	double bottom_deadrise; // The maximum bottom deadrise.
public:
	Ship();
	Ship(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Load, double Bottom);
	void Init();
	void Print();
	void Fuel();

};

