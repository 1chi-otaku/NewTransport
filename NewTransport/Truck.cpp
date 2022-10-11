#include "Truck.h"
using namespace n_Truck;
using namespace std;
Truck::Truck():Transport() {
	clearance = 0;
	carcase_type = new char[4];
	strcpy_s(carcase_type, 4, "N/A");
}
Truck::Truck(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Clearance, const char* CarcaseType):Transport (Title, Speed, Price, Fuel, Capacity) {
	clearance = Clearance;
	carcase_type = new char[strlen(CarcaseType) + 1];
	strcpy_s(carcase_type, strlen(CarcaseType) + 1, CarcaseType);
}
void Truck::Init()
{
	char temp[32];
	Transport::Init();
	cout << "Enter Clearance: " << endl;
	cin >> clearance;
	cout << "Enter type of car case: " << endl;
	cin >> temp;
	if (carcase_type != nullptr)delete[]carcase_type;
	carcase_type = new char[strlen(temp) + 1];
	strcpy_s(carcase_type, strlen(temp) + 1, temp);
}
void Truck::Print()const
{
	Transport::Print();
	cout << "Clearance - " << clearance << endl;
	cout << "Car case type - " << carcase_type << endl;
}
void Truck::Fuel()const
{
	cout << "Fuel consumption - " << fuel << endl;
}
Truck::Truck(const Truck& obj) :Truck(obj.title, obj.speed, obj.price, obj.fuel, obj.passenger_capacity, obj.clearance, obj.carcase_type)
{
}
Truck& Truck::operator=(const Truck& obj)
{
	if (this == &obj) return *this;
	if (title != nullptr)delete[]title;
	if (speed != nullptr)delete[]speed;
	if (carcase_type != nullptr)delete[] carcase_type;

	title = new char[strlen(obj.title) + 1];
	strcpy_s(title, strlen(obj.title) + 1, obj.title);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	carcase_type = new char[strlen(obj.carcase_type) + 1];
	strcpy_s(carcase_type, strlen(obj.carcase_type) + 1, obj.carcase_type);

	price = obj.price;
	passenger_capacity = obj.passenger_capacity;
	fuel = obj.fuel;

	return *this;
}
Truck::~Truck()
{
	if (carcase_type != nullptr)delete[]carcase_type;
}
