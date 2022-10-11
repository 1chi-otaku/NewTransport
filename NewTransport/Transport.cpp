#include "Transport.h"
#include <string>
using namespace n_Transport;
using namespace std;
Transport::Transport()
{
	title = new char[4];
	speed = new char[4];
	strcpy_s(title, 4, "N/A");
	strcpy_s(speed, 4, "N/A");

	price = 0;
	fuel = 0;
	passenger_capacity = 0;
}
Transport::Transport(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity)
{
	title = new char[strlen(Title) + 1];
	strcpy_s(title, strlen(Title) + 1, Title);
	speed = new char[strlen(Speed) + 1];
	strcpy_s(speed, strlen(Speed) + 1, Speed);

	price = Price;
	fuel = Fuel;
	passenger_capacity = Capacity;
}
Transport::Transport(const Transport& obj)
{
	if (title != nullptr)delete[]title;
	if (speed != nullptr)delete[]speed;

	title = new char[strlen(obj.title) + 1];
	strcpy_s(title, strlen(obj.title) + 1, obj.title);

	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);

	price = obj.price;
	fuel = obj.fuel;
	passenger_capacity = obj.passenger_capacity;

}
Transport& Transport::operator=(const Transport& obj)
{
	if (this == &obj) return *this;
	if (title != nullptr)delete[]title;
	if (speed != nullptr)delete[]speed;

	title = new char[strlen(obj.title) + 1];
	strcpy_s(title, strlen(obj.title) + 1, obj.title);

	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);

	price = obj.price;
	fuel = obj.fuel;
	passenger_capacity = obj.passenger_capacity;

	return*this;
}
void Transport::Init()
{
	char temp[64] = "";
	if (title != nullptr)delete[]title;
	cout << "Enter the Title: " << endl;
	cin >> temp;
	title = new char[strlen(temp) + 1];
	strcpy_s(title, strlen(temp)+1, temp);

	if (speed != nullptr)delete[]speed;
	cout << "Enter Speed: " << endl;
	cin >> temp;
	speed = new char[strlen(temp) + 1];
	strcpy_s(speed, strlen(temp)+1, temp);

	cout << "Enter Price: " << endl;
	cin >> price;
	cout << "Enter Fuel Consumption: " << endl;
	cin >> fuel;
	cout << "Enter Passenger Capacity: " << endl;
	cin >> passenger_capacity;
}
void Transport::Print() const
{
	cout << "Title - " << title << endl;
	cout << "Speed - " << speed << endl;
	cout << "Price - " << price << endl;
	cout << "Passenger capacity - " << passenger_capacity << endl;

}
Transport::~Transport()
{
	if (title != nullptr)delete[]title;
	if (speed != nullptr)delete[]speed;
}
