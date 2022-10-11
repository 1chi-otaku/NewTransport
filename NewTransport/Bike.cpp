#include "Bike.h"

using namespace n_Bike;
using namespace std;
Bike::Bike() :Transport()
{
	form_shape = new char[4];
	strcpy_s(form_shape, 4, "N/A");
	saddle_height = 0;
	fuel = 0;
}
Bike::Bike(const char* Title, const char* Speed, unsigned int Price, double Fuel, unsigned int Capacity, const char* FormShape, double Saddle):Transport(Title,Speed,Price,Fuel,Capacity)
{
	form_shape = new char[strlen(FormShape) + 1];
	strcpy_s(form_shape, strlen(FormShape) + 1, FormShape);
	saddle_height = Saddle;
	fuel = 0;
}
void Bike::Init()
{
	Transport::Init();
	char temp[32];
	cout << "Enter form shape of bike: " << endl;
	cin >> temp;

	if (form_shape != nullptr)delete[]form_shape;
	form_shape = new char[strlen(temp) + 1];
	strcpy_s(form_shape, strlen(temp) + 1, temp);

	cout << "Enter saddle height:" << endl;
	cin >> saddle_height;
	fuel = 0;
}
void Bike::Print()const
{
	Transport::Print();
	cout << "Form shape - " << form_shape << endl;
	cout << "Saddle height - " << saddle_height << endl;
}
void Bike::Fuel()const
{
	cout << "Bike has not fuel consumption.." << endl;
}
Bike::Bike(const Bike& obj):Bike(obj.title, obj.speed, obj.price, obj.fuel, obj.passenger_capacity,obj.form_shape,obj.saddle_height)
{
}
Bike& Bike::operator=(const Bike& obj)
{
	if (this == &obj) return *this;
	if (title != nullptr)delete[]title;
	if (speed != nullptr)delete[]speed;
	if (form_shape != nullptr)delete[] form_shape;

	title = new char[strlen(obj.title) + 1];
	strcpy_s(title, strlen(obj.title) + 1, obj.title);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	form_shape = new char[strlen(obj.form_shape) + 1];
	strcpy_s(form_shape, strlen(obj.form_shape) + 1, obj.form_shape);

	price = obj.price;
	passenger_capacity = obj.passenger_capacity;
	fuel = obj.fuel;

	return *this;
}
Bike::~Bike()
{
	if (form_shape != nullptr)delete[]form_shape;
}
