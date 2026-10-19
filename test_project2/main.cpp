#include <iostream>
#include <limits>
#include <string>
#include "test_project.h"

	using namespace std;
	
	namespace ns{
		string fuel_type;
		int litres_purchased;
		double amount_per_litre;
		
	}
	using namespace ns;
//ns::fuel_type = 
		int main () {
			
		cout << "Enter fuel type: ";
			getline (cin, fuel_type);
		cout << "Enter price per litre: ";
			cin >> amount_per_litre;
			cin.ignore();
		cout << "Enter Litres bought: ";
			cin >> litres_purchased;
			//cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.clear();
			
			 
			
		Fuel fuel;
		fuel.set_details(fuel_type, litres_purchased, amount_per_litre);
		
		cout << endl;
		
		fuel.display_details();	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			system ("pause>0");
				return 0;
				
		}