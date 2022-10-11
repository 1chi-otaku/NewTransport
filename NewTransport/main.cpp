#include <iostream>
#include "Transport.h"
#include "Airplane.h"
#include "Bike.h"
#include "Jeep.h"
#include "Ship.h"
#include "Truck.h"
using namespace std;

void PrintMenu();
int main() {
	Transport* ptr = nullptr;
	int input = -1;
	while (input!= 0)
	{
		system("cls");
		PrintMenu();

		cin >> input;
		switch (input)
		{
		case 1:
			system("cls");
			cout << "| *********| Select your transport |*********|" << endl;
			cout << "1. Airplane!" << endl;
			cout << "2. Bike!" << endl;
			cout << "3. Jeep!" << endl;
			cout << "4. Ship!" << endl;
			cout << "5. Truck!" << endl;
			cout << "0. Head back!" << endl;
			cout << "->!";
			cin >> input;
			switch (input)
			{
			case 1:
				system("cls");
				ptr = new n_Airplane::Airplane;
				cout << "Success! You can initialize your airplane in the menu from now on!" << endl;
				break;
			case 2:
				ptr = new n_Bike::Bike;
				cout << "Success! You can initialize your bike in the menu from now on!" << endl;
				break;
			case 3:
				ptr = new n_Jeep::Jeep;
				cout << "Success! You can initialize your jeep in the menu from now on!" << endl;
				break;
			case 4:
				ptr = new n_Ship::Ship;
				cout << "Success! You can initialize your ship in the menu from now on!" << endl;
				break;
			case 5:
				ptr = new n_Truck::Truck;
				cout << "Success! You can initialize your truck in the menu from now on!" << endl;
				break;
			case 0:
				break;

			default:
				cout << "Something bad happened! Try again." << endl;
				break;
			}
			if (input != 0)system("pause");
			break;

		case 2:
			system("cls");
			if (ptr == nullptr) {
				cout << "You have not initialized the transport, use option 1 in the main menu!" << endl;
				system("pause");
				break;
			}
			cout << "| *********| Transport Information! |*********|" << endl;
			ptr->Print();

			system("pause");
			break;

		case 3:
			system("cls");
			if (ptr == nullptr) {
				cout << "You have not initialized the transport, use option 1 in the main menu!" << endl;
				system("pause");
				break;
			}
			cout << "| *********| Transport Initialization! |*********|" << endl;
			ptr->Init();
			cout << endl;
			cout << "Success! You can see your transport information in the menu using option 2!" << endl;
			break;

		case 4:
			system("cls");
			if (ptr == nullptr) {
				cout << "You have not initialized the transport, use option 1 in the main menu!" << endl;
				system("pause");
				break;
			}
			cout << "| *********| Fuel Information |*********|" << endl;
			ptr->Fuel();
			system("pause");
			break;
		
		case 0:
			system("cls");
			cout << "See you next time!" << endl;
			break;


		default:
			cout << "You wrote wrong data. Try again." << endl;
			system("pause");
			break;

		}

	}
	
	if (ptr != nullptr)delete ptr;

	return 0;
}

void PrintMenu()
{
	cout << "| *********| Transport Simulator! TM |*********|" << endl;
	cout << "1. Generate transport! " << endl;
	cout << "2. Show transport information! " << endl;
	cout << "3. Initialization of transport!" << endl;
	cout << "4. Show fuel information!" << endl;
	cout << "0. Leave!" << endl << endl;
	cout << "->!";
}
