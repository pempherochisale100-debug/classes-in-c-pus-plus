#include <iostream>
#include <string>


using namespace std;

	class Person {
		private:
			string name;
			int age;
			
		public:
			
			Person () {
				name = "Flo";
				age = 25;
			}
			
			string get_name () {
				return name;
				}
				
			int get_age (){
				return age;
			}
			
			void eat () {
				cout << "This " <<  name << " is eating \n";
			}
			
			void bath () {
				cout << "This person is bathing \n";
				
			}
			
			void talk () {
				cout << "Flo talks in circles \n";
			}
			
			void display_details () {
				eat();
				cout << endl;
				talk ();
				cout << endl;
				bath () ;
				cout << endl;
				cout << "Name  => " << name << endl;
				cout << "Age   => " << age << endl;
			}
	};
	
	class Wife : public Person {
		private:
			string characters;
			string looks;
			string body_shape;
			
		public :
			
			void set_wifi_details () {
				cout << "Enter a character anlysed for ur wife:";
					getline (cin, characters);
					
				cout << "Enter a brief description of her looks: ";
					getline (cin, looks);
					
				cout << "Enter a brief des. of her body shape: ";
					getline (cin, body_shape);
			}
			
			void display_wife (){
				display_details ();	
			
				cout << "Wife's charactes des. => " << characters << endl;
				cout << "How she looks => " << looks << endl;
				cout << "Body shape explained " << body_shape << endl;
			}
		
	};
	
			class Student : public Person {
				
			};
			
			class Employee : public Person {
				
			};
	
	
	int main () {
		
		Wife wife;
		
		Student student;
		student.display_details();
		cout << endl;
		
		wife.set_wifi_details() ;
		
		cout << endl;
		
		wife.display_wife();
		cout << endl;
		
		Employee employee;
		employee.display_details();
		
		
		
		
		
		system ("pause>0");
			return 0;
	}
	
	
	
	
	
	
	
	
	
	
	