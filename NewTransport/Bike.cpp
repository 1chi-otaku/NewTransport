#include "Bike.h"

Bike::Bike():Transport()
{
	form_shape = "N/A";
	saddle_height = 0;
	fuel = 0;
}

Bike::Bike(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity, string FormShape, double Saddle):Transport(Title,Speed,Price,Fuel,Capacity)
{
	form_shape = FormShape;
	saddle_height = Saddle;
	fuel = 0;
}

void Bike::Init()
{
	Transport::Init();
	cout << "Enter form shape of bike: " << endl;
	cin >> form_shape;
	cout << "Enter saddle height:" << endl;
	cin >> saddle_height;
	fuel = 0;
}

void Bike::Print()
{
	Transport::Print();
	cout << "Form shape - " << form_shape << endl;
	cout << "Saddle height - " << saddle_height << endl;
}

void Bike::Fuel()
{
	cout << "Bike has not fuel consumption.." << endl;
}
