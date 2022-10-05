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
	cout << "Enter form shape of bike: " << endl;
	cin >> form_shape;
	cout << "Enter saddle height:" << endl;
	cin >> saddle_height;
	fuel = 0;
}

void Bike::Print()const
{
	cout << "Title - " << title << endl;
	cout << "Speed - " << speed << endl;
	cout << "Price - " << price << endl;
	cout << "Passenger capacity - " << passenger_capacity << endl;
	cout << "Form shape - " << form_shape << endl;
	cout << "Saddle height - " << saddle_height << endl;
}

void Bike::Fuel()const
{
	cout << "Bike has not fuel consumption.." << endl;
}
