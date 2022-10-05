#include "Truck.h"


Truck::Truck():Transport() {
	clearance = 0;
	carcase_type = "N/A";

}
Truck::Truck(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Clearance, string CarcaseType):Transport (Title, Speed, Price, Fuel, Capacity) {
	clearance = Clearance;
	carcase_type = CarcaseType;
}
void Truck::Init()
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
	cout << "Enter Clearance: " << endl;
	cin >> clearance;
	cout << "Enter type of car case: " << endl;
	cin >> carcase_type;
}

void Truck::Print()const
{
	cout << "Title - " << title << endl;
	cout << "Speed - " << speed << endl;
	cout << "Price - " << price << endl;
	cout << "Passenger capacity - " << passenger_capacity << endl;
	cout << "Clearance - " << clearance << endl;
	cout << "Car case type - " << carcase_type << endl;
}

void Truck::Fuel()const
{
	cout << "Fuel consumption - " << fuel << endl;
}
