// the following program will explain how memder functions can be defined and placed in c++

#include <iostream>
#include <string>

	using namespace std;
	
		class Student {
			int age = 21;
			string name = "pemphero chisale";
			
		public:
			
			// the follwoing function definitions will define functions which eill be defined within the class
			// here is default parameterised constructor to initialise the data members
			Student (string n, int a) {
				name = n;
				age = a;
			}
			
			// the following function will define a display function to diplay the student details
			void display () {
				cout << "name => " << name << endl;
				cout << "age => " << age << endl;
			}
			
			// the following is the public destructor
			~Student () {
				cout << "destructor called for " << name << endl;
			}
			
			// the following funtion definition will declare functions which will defined utside the class
			Student ();
			void display_flora ();
		};
		
		// function defintions outside the class 
		// NOTE: the use use of the scope resolution operator to show that the function being defined is from 
		// Student class 
		Student::Student() {
			name = "flora goodson ";
			age = 23;
		}
		
		void Student::display_flora() {
			cout << "name : " << name << endl;
			cout << "Age : " << age << endl;
		}
		
			int main () {
				
				// the following object instatiation will involve the function defined from within the class
				Student st ("pemphero chisale", 23);
				st.display();
				cout << endl;
				
				Student stud;
				stud.display_flora();
				cout << endl;
				
				
				
				
				return 0;
			}
		
		
		