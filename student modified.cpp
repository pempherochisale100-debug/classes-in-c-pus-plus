#include <iostream>
#include <string>

	using namespace std;
	
	class Student {
		private:
			string fullname;
			int age;
			float mark;
			char grade;
			
		public:
			Student (string name, int a, float m, char g) {
				this->fullname = name;
				this->age = a;
				this->mark = m;
				this->grade = g;
				cout << "SUCCESS: Data has been successfully added \n\n";
			}
			
			void display_details (){
				cout << "#############################################\n";
				cout << "         	  STUDENT DETAILS                 \n";
				cout << "#############################################\n";
				
					cout << "Name       => " << fullname << endl;
					cout << "Age        => " << age << endl;
					cout << "Mark       => " << mark << endl;
					cout << "Grade      => " << grade << endl;
					
				cout << "############################################\n";
			}
	};
	
		int main () {
			
			string name;
			int age;
			float marks;
			char grade;
			
			cout << "##############################################\n";
			cout << "              WELCOME TO USIMS                \n";
			cout << "##############################################\n";
			cout << "Enter fullname of the student: ";
				getline (cin, name);
			cout << "Enter age here: ";
				cin >> age;
				cin.ignore();
					if (age == 0) {
						cout << "This student has just born \n";
					}
					else if (age < 0) {
						cout << "This person does not exist \n";
					}
					else if (age >= 100 ) {
						cout << "Hmm too old to learn \n";
					}
					else {
						age = age;
					}
			cout << "Enter a mark: ";
				cin >> marks;
				cin.ignore ();
					if ( marks < 0){
						cerr << "ERROR: This mark is invalid! \n";
					}
					else if ( marks >= 0 && marks < 50){
						grade = 'F';
					}
					else if ( marks >= 50 && marks < 60) {
						grade = 'D';
					}
					else if ( marks >= 60 && marks < 70) {
						grade = 'C';
					}
					else if ( marks >= 70 && marks < 80){
						grade = 'B';
					}
					else if (marks >= 80 && marks < 100) {
						grade = 'A';
					}
					else {
						cerr << "ERROR: Invalid input detected!! \n";
					}
					
			Student Student(name, age, marks, grade);
			Student.display_details();
			
			
			
			
			
			
			
			
			
			
			
			
			system ("pause>0");
				return 0;
		}