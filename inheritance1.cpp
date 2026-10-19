#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Person {
			private:
				string full_name;
				int age;
			public:
				Person (){
					this->full_name = "Unknown";
					this->age = 0;
				}
				
				void set_name (string name) {
					if (!name.empty()){
						this->full_name = name;
					}
					else {
						cerr << "\nERROR: Name must be filled \n";
					}
				}
				void set_age (int a ) {
				//	(a > 0) ? this->age = a : cerr << "\nERROR: Age must be greater than 0 \n";
					if (a > 0) {
						this->age = a;
					}
					else {
						cerr << "ERROR: Age must be greater than 0 \n";
					}
				}
				
				string get_name () {
					return full_name;
				}
				int get_age () {
					return age;
				}
				
				void display_person () {
					cout << "Full name    => " << full_name << endl;
					cout << "Age          => " << age << endl;
				}
		};
		
		class Student : public Person {
			private:
				float grade;
				
			public:
				Student (){
					grade = 0.0;
				}
				void set_grade (float g){
					//(g > 0) ? this->grade = g : cerr << "ERROR: Grade must be greater than 0 \n";
					if (g >= 0 && g < 100) {
						this->grade = g;
					}
					else {
						cerr << "ERROR: Grage must be a positive number \n";
					}
				}
				
				float get_grade () {
					return grade;
				}
				
				void display_student (){
					display_person ();
					cout << "Grade        => " << grade << endl;
				}
		};
		
		namespace student {
			string name;
			int age;
			float grade;
		}
		
			int main () {
				
				cout << "Enter full name of the student: ";
					getline (cin, student::name);
				do{
				
				cout << "Enter age of the student: ";
					cin >> student::age;
						if (cin.fail() || student::age < 0) {
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							cerr << "Age must be a positive number \n";
							cin.clear();
							student::age = 0;
						}
						else {
							break;
						}
				}
				while (true);
				
				do {
				
				cout << "Enter mark for the student: ";
					cin >> student::grade;
						if (cin.fail() || student::grade < 0 || student::grade > 100){
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							cerr << "ERROR: Grade must be between 0 and 100 \n";
							cin.clear();
							student::grade = 0.0;
						}
						else {
							break;
						}
				}
				while (true);
				Student student1;
				student1.set_name(student::name);
				student1.set_age(student::age);
				student1.set_grade(student::grade);
				cout << endl;
				
				student1.display_student();
				
				
				student1.display_person();
				
				
				
				
				
				
				
				system ("pause>0");
					return 0;
			}
		
		
		
		
		
		
		
		
		
		
		
		
		
		