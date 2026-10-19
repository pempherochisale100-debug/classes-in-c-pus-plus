#include <iostream>
#include <string>
#include <limits>
#include "test_project.h"

	using namespace std;
	
	namespace my_namespace {
		string name;
		string color;
		int age;
		string sound;
		string locomotion;
		int number_of_legs;
	}
	
	int main () {
		
		Animal animal;
		
		cout << "Enter name of the animal: ";
			getline (cin, my_namespace::name);
			
		cout << "Enter color of " << my_namespace::name << " : ";
			getline (cin, my_namespace::color);
				if (my_namespace::color.empty()){
					cerr << "\nERROR: You have to fill this field \n";
					cout << "Enter color of " << my_namespace::name << " : ";
					getline (cin, my_namespace::color);
				}
			
		cout << "Enter sound produced by " << my_namespace::name << " : ";
			getline (cin, my_namespace::sound);
			
		cout << "Enter mode of locomotion: ";
			getline (cin, my_namespace::locomotion);
		cout << "How old is " << my_namespace::name << "?: ";
			cin >> my_namespace::age;
			if (cin.fail()){
				cerr << "ERROR: An error occured \n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				my_namespace::age = 0;
			}
		cout << "Enter number of legs if any: ";
			cin >> my_namespace::number_of_legs;
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					my_namespace::number_of_legs = 0;
				}
		
		animal.set_details(my_namespace::name, my_namespace::color, my_namespace::locomotion, my_namespace::sound,
						   my_namespace::number_of_legs, my_namespace::age);
						   
		cout << endl;
		
		animal.display_details();
		
		
		
		
		system ("pause>0");
			return 0;
	}