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
	cout << "Enter Load capacity: " << endl;
	cin >> load_capacity;
	cout << "Enter Bottom deadrise: " << endl;
	cin >> bottom_deadrise;
}

void Ship::Print()const
{
	cout << "Title - " << title << endl;
	cout << "Speed - " << speed << endl;
	cout << "Price - " << price << endl;
	cout << "Passenger capacity - " << passenger_capacity << endl;
	cout << "Load Capacity - " << load_capacity << endl;
	cout << "Bottom Deadrise - " << bottom_deadrise << endl;

}

void Ship::Fuel()const
{
	cout << "Fuel consumption - " << fuel << endl;
}
