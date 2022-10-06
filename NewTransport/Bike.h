#pragma once
#include "Transport.h"
class Bike : public Transport
{
	char* form_shape;
	double saddle_height;
public:
	Bike(); //Will call default constructor of class Transport and initialize Bike class fields with N/A values.
	Bike(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, const char* FormShape, double Saddle); //Will call default constructor of class Transport and initialize Bike class fields with resprective value.
	void Init(); //Initialization of fields.
	void Print()const; //Initialization of fields. 
	void Fuel()const; //Prints confused message.
	Bike(const Bike& obj);
	Bike& operator=(const Bike& obj);
	~Bike();
};

