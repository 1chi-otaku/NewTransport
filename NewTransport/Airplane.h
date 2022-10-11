#pragma once
#include "Transport.h"
#include <iostream>
using namespace n_Transport;
namespace n_Airplane {
	class Airplane : public Transport
	{
		double flight_altitude; //Max flight altitude.
		double wingspan;		//Wingspan of the airplane (metres)
		char* airplane_type; //Airplane' type 

	public:
		Airplane();				//Will call default constructor of class Transport and initialize Airplane class fields with N/A values.
		Airplane(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Fly, double Wing, const char* AirplaneType);	//Will call default constructor of class Transport and initialize Airplane class fields with resprective value.
		void Init();	//Initialization of fields. Delegation.
		void Print()const;	//Printing fields. Delegation.
		void Fuel()const;	//Prints fuel  consumption.
		Airplane(const Airplane& obj);
		Airplane& operator=(const Airplane& obj);
		~Airplane();
	};

}