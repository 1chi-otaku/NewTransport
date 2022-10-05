#pragma once
#include "Transport.h"
class Truck: public Transport
{
	string carcase_type;	//Type of truck's carcase.
	double clearance;		//Number of clearance.
public:
	Truck();
	Truck(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Clearance, string CarcaseType);
	void Init();
	void Print()const;
	void Fuel()const;
};

