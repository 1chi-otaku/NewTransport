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
	cout << "Enter the Title: " << endl;
	cin >> title;
	cout << "Enter Speed: " << endl;
	cin >> speed;
	cout << "Enter Price: " << endl;
	cin >> price;
	cout << "Enter Fuel Consumption: " << endl;
	cin >> fuel;
	cout << "Enter Passenger Capacity: " << endl;
	cin >> passenger_capacity;
	cout << "Enter Trunk volume: " << endl;
	cin >> trunk_volume;
	cout << "Enter Transmission type: " << endl;
	cin >> transmission;
}

void Jeep::Print()const
{
	cout << "Title - " << title << endl;
	cout << "Speed - " << speed << endl;
	cout << "Price - " << price << endl;
	cout << "Passenger capacity - " << passenger_capacity << endl;
	cout << "Trunk volume - " << trunk_volume << endl;
	cout << "Transmission - " << transmission << endl;
}

void Jeep::Fuel()const
{
	cout << "Fuel consumption - " << fuel << endl;
}
