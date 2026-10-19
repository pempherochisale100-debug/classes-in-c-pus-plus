#ifndef TEST_PROJECT_H
#define TEST_PROJECT_H


	#include <string>
	#include <iostream>
	
	using namespace std;
	
		class Animal {
			private:
				string name;
				string color;
				int age;
				string sound;
				string locomotion;
				int number_of_legs;
				
			public:
				
				void set_details (string n, string s, string c, string l, int legs, int age);
				void display_details ();
				~Animal (){
					cout << "Destructor called for " << name << endl;
				}
		};
	
	
	
#endif