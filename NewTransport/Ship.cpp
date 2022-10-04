#include "Ship.h"

Ship::Ship():Transport()
{
	load_capacity = 0;
	bottom_deadrise = 0;
}

Ship::Ship(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Load, double Bottom):Transport(Title,Speed,Price,Fuel,Capacity)
{
	load_capacity = Load;
	bottom_deadrise = Bottom;
}

void Ship::Init()
{
	Transport::Init();
	cout << "Enter Load capacity: " << endl;
	cin >> load_capacity;
	cout << "Enter Bottom deadrise: " << endl;
	cin >> bottom_deadrise;
}

void Ship::Print()
{
	Transport::Print();
	cout << "Load Capacity - " << load_capacity << endl;
	cout << "Bottom Deadrise - " << bottom_deadrise << endl;

}

void Ship::Fuel()
{
	cout << "Fuel consumption - " << fuel << endl;
}
