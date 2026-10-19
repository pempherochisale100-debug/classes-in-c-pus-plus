#include <iostream>
#include <string>
#include <limits>
#include "test_project.h"

	using namespace std;
	
		void Animal::set_details(string n, string c, string l, string s, int legs, int a) {
			this->name = n;
			this->color = c;
			this->locomotion = l;
			this->number_of_legs = legs;
			this->sound = s;
			this->age = a;
			cout << "\nSUCCESS: Animal data has been successfult set \n";
		}
		
		void Animal::display_details() {
			cout << "---------------------------------------------\n";
			cout << "              MY ANIMAL DATABASE              \n";
			cout << "---------------------------------------------\n";
			cout << "Name       : " << name << endl;
			cout << "Color      : " << color << endl;
			cout << "Locomotion : " << locomotion << endl;
			cout << "No. of legs: " << number_of_legs << endl;
			cout << "Age        : " << age << endl;
			cout << "Sound      : " << sound <<endl;
			cout << "----------------------------------------------\n";
			
		}
		
		