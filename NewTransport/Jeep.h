#pragma once
#include "Transport.h"
#include <iostream>
using namespace std;

class Jeep: public Transport
{
	string transmission; //Type of transmission
	double trunk_volume; // Volume of trunk
public:
	Jeep(); ; //Will call default constructor of class Transport and initialize Jeep class fields with N/A values.
	Jeep(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, string Transmission, double Trunk);
	void Init();
	void Print()const;
	void Fuel()const;

};

