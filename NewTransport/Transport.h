#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
	char* title; //Title/Name/Model.
	char* speed; //Max speed of transport.
	unsigned int price;	//Market price of transport.
	unsigned int passenger_capacity; //Max. passenger capacity.
	double fuel; // Fuel consumption.


public:
	Transport(); //Initialization of string fields with 'N/A' values; int and double with 0.
	Transport(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity); //Initialization of fields with resprective values.
	Transport(const Transport& obj);
	Transport& operator=(const Transport& obj);
	virtual void Init();	//Initialization of fields from keyboard.
	virtual void Print()const;	//Prints transport data.
	virtual void Fuel()const = 0;	//Prints fuel consumption.
	virtual ~Transport();

};

