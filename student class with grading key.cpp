#include <iostream>
#include <string>

	using namespace std;
	
		class Student {
			private: 
				string name;
				float marks;
				char grade;
			public:
				void set_detail (string n, float mark) {
					if (mark <= 0) {
						cerr << "ERROR: Marks can't be less than 0\n";
					}
					else {
						this->name = n;
						this->marks = mark;	
					}
				}
				
				char determine_grade (float marks) {
					if (marks < 50) {
						this->grade = 'F';	
					}
					else if (marks >= 50 && marks <= 59) {
						this->grade = 'D';
					}
					else if (marks >= 60 && marks <= 69) {
						this->grade = 'C';
					}
					else if (marks >= 70 && marks <= 79) {
						this->grade = 'B';
					}
					else {
						this->grade = 'A';
					}
					
						return this->grade;
				}
				
				void print_results () {
					cout << "##########################################\n";
					cout << "         HERE ARE YOUR DETAILS            \n";
					cout << "##########################################\n";
					
						cout << "Name       => " << name << endl;
						cout << "Marks      => " << marks << endl;
						cout << "Grade      => " << grade << endl;
						
				}
		};
		
		
		
				int main () {
					
					Student student;
					
					string s_name;
					float markss;
					
					cout << "#########################################\n";
					cout << "          	MARKS AGAINST GRADES          \n";
					cout << "#########################################\n";
					
						cout << "Enter name of the student: ";
							getline (cin, s_name);
						cout << "Enter a mark in subject: ";
							cin >> markss;
							cin.ignore();
							
					
				student.set_detail(s_name, markss);
				cout << endl << endl;
				
				student.determine_grade(markss);
				cout << endl << endl;
				
				student.print_results();
				
					
					
					
					
					
					
					
					
					
					system ("pause>0");
						return 0;
				}