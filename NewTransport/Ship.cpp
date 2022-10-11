#include "Ship.h"
using namespace n_Ship;
using namespace std;
Ship::Ship():Transport()
{
	load_capacity = 0;
	bottom_deadrise = 0;
	ship_type = new char[4];
	strcpy_s(ship_type, 4, "N/A");
}
Ship::Ship(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Load, double Bottom,const char* ShipType):Transport(Title,Speed,Price,Fuel,Capacity)
{
	load_capacity = Load;
	bottom_deadrise = Bottom;

	ship_type = new char[strlen(ShipType) + 1];
	strcpy_s(ship_type, strlen(ShipType) + 1, ShipType);
}
void Ship::Init()
{
	char temp[32];
	Transport::Init();
	cout << "Enter Load capacity: " << endl;
	cin >> load_capacity;
	cout << "Enter Bottom deadrise: " << endl;
	cin >> bottom_deadrise;
	cout << "Enter Ship type: " << endl;
	cin >> temp;
	if (ship_type != nullptr)delete[]ship_type;
	ship_type = new char[strlen(temp) + 1];
	strcpy_s(ship_type, strlen(temp) + 1, temp);
}
void Ship::Print()const{
	Transport::Print();
	cout << "Load Capacity - " << load_capacity << endl;
	cout << "Bottom Deadrise - " << bottom_deadrise << endl;
	cout << "Ship type - " << ship_type << endl;
}
void Ship::Fuel()const
{
	cout << "Fuel consumption - " << fuel << endl;
}
Ship::Ship(const Ship& obj):Ship(obj.title, obj.speed, obj.price, obj.fuel, obj.passenger_capacity,obj.load_capacity, obj.bottom_deadrise, obj.ship_type)
{
}
Ship& Ship::operator=(const Ship& obj)
{
	if (this == &obj) return *this;
	if (title != nullptr)delete[]title;
	if (speed != nullptr)delete[]speed;
	if (ship_type != nullptr)delete[] ship_type;

	title = new char[strlen(obj.title) + 1];
	strcpy_s(title, strlen(obj.title) + 1, obj.title);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	ship_type = new char[strlen(obj.ship_type) + 1];
	strcpy_s(ship_type, strlen(obj.ship_type) + 1, obj.ship_type);

	price = obj.price;
	passenger_capacity = obj.passenger_capacity;
	fuel = obj.fuel;

	return *this;
}
Ship::~Ship()
{
	if (ship_type != nullptr)delete[] ship_type;
}
