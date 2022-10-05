#pragma once
#include "Transport.h"
#include <iostream>
using namespace std;

class Airplane: public Transport
{
	double flight_altitude; //Max flight altitude.
	double wingspan;		//Wingspan of the airplane (metres)

public:
	Airplane();				//Will call default constructor of class Transport and initialize Airplane class fields with N/A values.
	Airplane(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Fly, double Wing);	//Will call default constructor of class Transport and initialize Airplane class fields with resprective value.
	void Init();	//Initialization of fields. Delegation.
	void Print()const;	//Printing fields. Delegation.
	void Fuel()const;	//Prints fuel  consumption.
		

	
};

