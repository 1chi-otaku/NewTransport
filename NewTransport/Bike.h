#pragma once
#include "Transport.h"
class Bike : public Transport
{
	string form_shape;
	double saddle_height;
public:
	Bike(); //Will call default constructor of class Transport and initialize Bike class fields with N/A values.
	Bike(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, string FormShape, double Saddle); //Will call default constructor of class Transport and initialize Bike class fields with resprective value.
	void Init(); //Initialization of fields.
	void Print()const; //Initialization of fields. 
	void Fuel()const; //Prints confused message.
};

