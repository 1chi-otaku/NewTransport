#include "Transport.h"

Transport::Transport()
{
	title = "N/A";
	speed = "N/A";
	price = 0;
	fuel = 0;
	passenger_capacity = 0;
}

Transport::Transport(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity)
{
	speed = Speed;
	title = Title;
	price = Price;
	fuel = Fuel;
	passenger_capacity = Capacity;
}

void Transport::Init()
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
}

void Transport::Print()
{
	cout << "Title - " << title << endl;
	cout << "Speed - " << speed << endl;
	cout << "Price - " << price << endl;
	cout << "Passenger capacity - " << passenger_capacity << endl;
}

void Transport::Fuel()
{
	cout << "Fuel consumption - " << fuel << endl;
}
