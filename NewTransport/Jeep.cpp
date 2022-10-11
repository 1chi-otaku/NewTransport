#include "Jeep.h"
using namespace n_Jeep;
using namespace std;
Jeep::Jeep():Transport()
{
	trunk_volume = 0;
	transmission = new char[4];
	strcpy_s(transmission, 4, "N/A");
}
Jeep::Jeep(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, const char* Transmission, double Trunk):Transport(Title,Speed,Price,Fuel,Capacity)
{
	transmission = new char[strlen(Transmission) + 1];
	strcpy_s(transmission, strlen(Transmission) + 1, Transmission);
	trunk_volume = Trunk;
}
void Jeep::Init()
{
	Transport::Init();
	char temp[32];
	cout << "Enter Trunk volume: " << endl;
	cin >> trunk_volume;
	cout << "Enter Transmission type: " << endl;
	cin >> temp;
	if (transmission != nullptr)delete[]transmission;
	transmission = new char[strlen(temp) + 1];
	strcpy_s(transmission, strlen(temp) + 1, temp);
}
void Jeep::Print()const
{
	Transport::Print();
	cout << "Trunk volume - " << trunk_volume << endl;
	cout << "Transmission - " << transmission << endl;
}
void Jeep::Fuel()const
{
	cout << "Fuel consumption - " << fuel << endl;
}
Jeep::Jeep(const Jeep& obj) :Jeep(obj.title, obj.speed, obj.price, obj.fuel, obj.passenger_capacity, obj.transmission, obj.trunk_volume)
{
}
Jeep& Jeep::operator=(const Jeep& obj)
{
	if (this == &obj) return *this;
	if (title != nullptr)delete[]title;
	if (speed != nullptr)delete[]speed;
	if (transmission != nullptr)delete[] transmission;

	title = new char[strlen(obj.title) + 1];
	strcpy_s(title, strlen(obj.title) + 1, obj.title);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	transmission = new char[strlen(obj.transmission) + 1];
	strcpy_s(transmission, strlen(obj.transmission) + 1, obj.transmission);

	price = obj.price;
	passenger_capacity = obj.passenger_capacity;
	fuel = obj.fuel;

	return *this;
}
Jeep::~Jeep()
{
	if (transmission != nullptr)delete[]transmission;
}
