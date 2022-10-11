#pragma once
#include "Transport.h"
using namespace n_Transport;
namespace n_Truck {
	class Truck : public Transport
	{
		char* carcase_type;	//Type of truck's carcase.
		double clearance;		//Number of clearance.
	public:
		Truck();
		Truck(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Clearance, const char* CarcaseType);
		void Init();
		void Print()const;
		void Fuel()const;
		Truck(const Truck& obj);
		Truck& operator=(const Truck& obj);
		~Truck();
	};
}


