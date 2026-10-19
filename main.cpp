#include <iostream>
#include <string>
#include "fuelpurchase.h"

	using namespace std;
	
		int main () {
			
		string name;
		float litres, price;
		Fuel_purchase fuel;
		
		cout << "Enter fuel type: ";
			getline (cin, name);
			fuel.set_fuel_type (name);
		cout << "Enter price per litre:MWK";
			cin >> price;
			cin.ignore();
			fuel.set_price (price);
		cout << "Enter litres you want to buy: ";
			cin >> litres;
			cin.ignore();
			fuel.set_litres(litres);
			
		cout << endl;
		
		fuel.display_details();
			
			
			
			
			
			
			
			
			
			
			
			system ("pause>0");
				return 0;
		}