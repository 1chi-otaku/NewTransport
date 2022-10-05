#include "Transport.h"

Transport::Transport()
{
	title = "N/A";
	speed = "N/A";
	price = 0;
	fuel = 0;
	passenger_capacity = 0;
}

Transport::Transport(string Title, string Speed, unsigned int Price, double Fuel, unsigned int Capacity)
{
	speed = Speed;
	title = Title;
	price = Price;
	fuel = Fuel;
	passenger_capacity = Capacity;
}
