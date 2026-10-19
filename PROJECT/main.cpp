#include <iostream>
#include <string>
#include "FUELPURCHASE.h"
#include <limits>

	using namespace std;
	
	int main () {
		
		string t;
		int litre;
		double p;
		
		Fuel fuel;
		
		cout << "Enter fuel type: ";
			getline (cin, t);
		fuel.set_type(t);
		cout << "Enter litres you want buy: ";
			cin >> litre;
			cin.ignore ();
				if (cin.fail()){
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max (), '\n');
					litre = 0;
				}
		fuel.set_litres (litre);
		cout << "Enter price per litre: ";
			cin >> p;
			cin.ignore();
			
		fuel.set_price(p);
		
		cout << endl;
		
		fuel.display_details();
		
		
		
		
		
		
		system ("pause>0");
			return 0;
	}
	
		