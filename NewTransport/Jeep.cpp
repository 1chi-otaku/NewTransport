#include "Jeep.h"

Jeep::Jeep():Transport()
{
	trunk_volume = 0;
	transmission = "N/A";
}

Jeep::Jeep(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, string Transmission, double Trunk):Transport(Title,Speed,Price,Fuel,Capacity)
{
	trunk_volume = Trunk;
	transmission = Transmission;
}

void Jeep::Init()
{
	Transport::Init();
	cout << "Enter Trunk volume: " << endl;
	cin >> trunk_volume;
	cout << "Enter Transmission type: " << endl;
	cin >> transmission;
}

void Jeep::Print()
{
	Transport::Print();
	cout << "Trunk volume - " << trunk_volume << endl;
	cout << "Transmission - " << transmission << endl;
}

void Jeep::Fuel()
{
	cout << "Fuel consumption - " << fuel << endl;
}
