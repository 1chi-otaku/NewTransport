#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
	string title; //Title/Name/Model.
	string speed; //Max speed of transport.
	unsigned int price;	//Market price of transport.
	unsigned int passenger_capacity; //Max. passenger capacity.
	double fuel; // Fuel consumption.


public:
	Transport(); //Initialization of string fields with 'N/A' values; int and double with 0.
	Transport(string Title,string Speed, unsigned int Price, double Fuel, unsigned int Capacity); //Initialization of fields with resprective values.
	virtual void Init() = 0;	//Initialization of fields from keyboard.
	virtual void Print()const = 0;	//Prints transport data.
	virtual void Fuel()const = 0;	//Prints fuel consumption.
};

