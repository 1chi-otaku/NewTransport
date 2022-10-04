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
	Transport::Init();
	cout << "Enter Flight Altitude: " << endl;
	cin >> flight_altitude;
	cout << "Enter Wingspan: " << endl;
	cin >> wingspan;
}

void Airplane::Print()
{
	Transport::Print();
	cout << "Flight Altutude - " << flight_altitude << endl;
	cout << "Wingspan - " << wingspan << endl;

}

void Airplane::Fuel()
{
	cout << "Fuel consumption - " << fuel << endl;
}
