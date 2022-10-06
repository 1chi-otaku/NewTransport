#include "Airplane.h"
#include "Transport.h"


Airplane::Airplane():Transport() {
	airplane_type = new char[4];
	strcpy_s(airplane_type, 4, "N/A");
	flight_altitude = 0;
	wingspan = 0;
}
Airplane::Airplane(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, double Fly, double Wing,const char* AirplaneType):Transport(Title,Speed,Price,Fuel,Capacity) {
	airplane_type = new char[strlen(AirplaneType) + 1];
	strcpy_s(airplane_type, strlen(AirplaneType) + 1, AirplaneType);
	flight_altitude = Fly;
	wingspan = Wing;
}
void Airplane::Init()
{
	Transport::Init();
	char temp[32];
	cout << "Enter Flight Altitude: " << endl;
	cin >> flight_altitude;
	cout << "Enter Wingspan: " << endl;
	cin >> wingspan;
	cout << "Enter Airplane type: " << endl;
	cin >> temp;
	if (airplane_type != nullptr)delete[]airplane_type;
	airplane_type = new char[strlen(temp) + 1];
	strcpy_s(airplane_type, strlen(temp) + 1, temp);

}
void Airplane::Print()const
{
	Transport::Print();
	cout << "Flight Altutude - " << flight_altitude << endl;
	cout << "Wingspan - " << wingspan << endl;
	cout << "Airplane type - " << airplane_type << endl;

}
void Airplane::Fuel()const
{
	cout << "Fuel consumption - " << fuel << endl;
}
Airplane::Airplane(const Airplane& obj):Airplane(obj.title,obj.speed,obj.price,obj.fuel,obj.passenger_capacity,obj.flight_altitude,obj.wingspan,obj.airplane_type)
{
}
Airplane& Airplane::operator=(const Airplane& obj)
{
	if (this == &obj) return *this;
	if (title != nullptr)delete[]title;
	if (speed != nullptr)delete[]speed;
	if (airplane_type != nullptr)delete[] airplane_type;

	title = new char[strlen(obj.title) + 1];
	strcpy_s(title, strlen(obj.title) + 1, obj.title);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	airplane_type = new char[strlen(obj.airplane_type) + 1];
	strcpy_s(airplane_type, strlen(obj.airplane_type) + 1, obj.airplane_type);

	price = obj.price;
	passenger_capacity = obj.passenger_capacity;
	fuel = obj.fuel;

	return *this;
}
Airplane::~Airplane()
{
	if (airplane_type != nullptr)delete[] airplane_type;
}
