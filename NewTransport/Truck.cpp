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
	Transport::Init();
	cout << "Enter Clearance: " << endl;
	cin >> clearance;
	cout << "Enter type of car case: " << endl;
	cin >> carcase_type;
}

void Truck::Print()
{
	Transport::Print();
	cout << "Clearance - " << clearance << endl;
	cout << "Car case type - " << carcase_type << endl;
}

void Truck::Fuel()
{
	cout << "Fuel consumption - " << fuel << endl;
}
