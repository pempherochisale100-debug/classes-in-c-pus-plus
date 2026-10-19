#include <iostream>
#include <string>

	using namespace std;
	
		class Student {
			private: 
				string name;
				int age;
				
			public :
				
				void set (string n, int a){
					if (age <= 0 ) {
						cerr << "ERROR: Age can not be less than 0" << endl;
					}
					else {
						this->name = name;
						this->age = a;
						cout << "SUCCESS: Data has been set \n";
					}
				}
				
				void introduce (string message, string name, int age) {
					cout << message << endl;
					cout << "Name       => " << name << endl;
					cout << "Age        => " << age << endl;
				}
				
		};
		
		
		int main () {
			
			 Student student1;
			
			string student_name, message = "Welcome Our dear student!!!!!!!\n";
			int age;
			
				cout << "##########################################\n";
				cout << "        	 WELCOME STUDENT               \n";
				cout << "##########################################\n";
				
				cout << "Enter name: ";
					getline (cin, student_name);
				cout << "Enter age: ";
					cin >> age;
					cin.ignore();
				
					
			    student1.set(student_name, age);
			    cout << endl << endl;
				student1.introduce(message, student_name, age);  
			
			
			
			
			
			
			
			system ("pause>0");
				return 0;
		}