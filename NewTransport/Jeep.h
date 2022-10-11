#pragma once
#include "Transport.h"
#include <iostream>
using namespace n_Transport;
namespace n_Jeep{
	class Jeep : public Transport
	{
		char* transmission; //Type of transmission
		double trunk_volume; // Volume of trunk
	public:
		Jeep(); ; //Will call default constructor of class Transport and initialize Jeep class fields with N/A values.
		Jeep(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, const char* Transmission, double Trunk);
		void Init();
		void Print()const;
		void Fuel()const;
		Jeep(const Jeep& obj);
		Jeep& operator=(const Jeep& obj);
		~Jeep();
	};

}