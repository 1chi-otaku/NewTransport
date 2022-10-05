#include "Airplane.h"
#include "Transport.h"


Airplane::Airplane():Transport() {
	flight_altitude = 0;
	wingspan = 0;
}
Airplane::Airplane(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Fly, double Wing):Transport(Title,Speed,Price,Fuel,Capacity) {
	flight_altitude = Fly;
	wingspan = Wing;
}

void Airplane::Init()
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
	cout << "Enter Flight Altitude: " << endl;
	cin >> flight_altitude;
	cout << "Enter Wingspan: " << endl;
	cin >> wingspan;
}

void Airplane::Print()const
{
	cout << "Title - " << title << endl;
	cout << "Speed - " << speed << endl;
	cout << "Price - " << price << endl;
	cout << "Passenger capacity - " << passenger_capacity << endl;
	cout << "Flight Altutude - " << flight_altitude << endl;
	cout << "Wingspan - " << wingspan << endl;

}

void Airplane::Fuel()const
{
	cout << "Fuel consumption - " << fuel << endl;
}
