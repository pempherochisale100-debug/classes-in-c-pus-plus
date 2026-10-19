// the following program will discover the passing of objects to functions as arguments

#include <iostream>
#include <string>
#include <cctype>

	using namespace std;
	
		class Wife {
			private:	
				string name;
				string general_description;
				int age;
				bool love_stats;
				string con;
			public:
				
				// a function to set the wife details, it will return void since it only setting the details
				void set_wife (string name, string desc, int age, bool stats) {
					this->name = name;
					this->general_description = desc;
					this->age = age;
					(stats == true) ? this->con = "Still loving each other" : this->con = "Love has died";
				}
				
				// the follwoing function will display the wife details to the console window 
				void display () const {
					cout << "Wife name : " << this->name << endl;
					cout << "Description: " << this->general_description << endl;
					cout << "Age   : " << this->age << endl;
					cout << "Love status " << this->con << endl;
				}
				
				~Wife () {
					cout << "Destructor has been called for " << this->name << endl;
				}
				
				
		};
		
		// the follwoing function will receice a copy of the Wife object 
		// that is passing by value 
		void display_wife_by_value (Wife wife) {
			cout << "Wife details displyed using a pass by value " << endl;
			// the following line of code will invoke the display method of wife class throug its passed   by value object
			wife.display();
			
		}
		
		// the follwoing function demonsytrates passing by reference 
		void display_by_reference (Wife& wife) {
			cout << "Wife details displyed using a pass by reference " << endl;
			wife.display();
		}
		
		// the following function demonastrates passing by pointer
		void display_by_pointer (Wife* wife) {
			cout << "Wife details displyed using a pass by pointer " << endl;
			wife->display();
			
		}
		
		
		// in c++, a function can also return an object of a class for exapmle
		
		Wife return_wife_obj () {
			
			Wife wife;
			wife.set_wife("flo", "nice", 21, false);
			//wife.display();
			return wife; 
		}
		
		// overloading the insertion operator
		
		
			int main () {
				
				Wife material;
				material.set_wife("flora goodson", "kind, loving, generous and beatiful as well", 23, true);
				
				// calling a pass by value function 
				display_wife_by_value (material);
				cout << endl;
				
				// calling a pass by reference function 
				display_by_reference (material);
				cout << endl;
				
				// calling a pass by pointer function 
				display_by_pointer (&material);
				cout << endl;
				
				
				// to handle function that is returning an object i would do the following 
				
				Wife wife = return_wife_obj ();
				wife.display();
				//cout << wife << endl;
				
				cin.get();
				
				
				
				
				return 0;
			}
		