// the following program will demonstrate the composition concept in OOP

#include <iostream>
#include <string>

	using namespace std;
	
		class Grades {
			private:
				float mark;
				
			public:
				Grades (float mark) {
					if (!(mark < 0.0)) {
						this->mark = mark;
					}
				}
				float get_mark () const {
					return mark;
				}
				char determine_grade () {
					if (mark >= 0 && mark < 40) {
						return 'F';
					}
					else if (mark >= 40 && mark < 50) {
						return 'E';
					}
					else if (mark >= 50 && mark < 60) {
						return 'D';
					}
					else if (mark >= 60 && mark < 70) {
						return 'C';
					}
					else if (mark >= 70 && mark < 80) {
						return 'B';
					}
					else if (mark >= 80 && mark <= 100) {
						return 'A';
					}
					else {
						return -1;
						//cout << "Invalid grade detected..." << endl;
					}
				}
				
				~Grades () {
					cout << "Grade destructor has been called here..." << endl;
				}
		};
		
		class Student {
			private:
				string name, id;
				Grades g; // this is the compoed object of type class (Student has-a grade) => strong dependacy
			public:
				
				Student (string n, string identity, float grade) : g (grade) {
					if (n.empty()) {
						cout << "Failed to set, it is empty..." << endl;
					}
					else {
						this->name = n;
					}
					if (identity.empty()) {
						cout << "Failed to set identity, it is empty..." << endl;
					}
					else {
						this->id = identity;
					}
				}
				
				void diplay_student () {
					cout << "-------------student details----------------" << endl;
					cout << "Name     : " << this->name << endl;
					cout << "Identity : " << this->id << endl;
					cout << "Mark     : " << g.get_mark () << endl;
					cout << "Grade    : " << g.determine_grade () << endl;
				}
		
				~Student () {
					cout << "Student destructor has been called here... " << endl;
				}
		};
		
			int main () {
				
				Student student = Student ("flora goodson", "BSE/25/SS/006", 50);
				student.diplay_student();
					
				
				
				
				return 0;
			}
			
			
			
			
			
			
			
			
			