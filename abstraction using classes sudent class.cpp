// the following code will focus much on abstraction in c++ 
// in the first place i will use abstraction using the classes (basic abstraction)

#include <iostream>
#include <string>
#include <numeric>
#include <limits>
#include <iomanip>

	using namespace std;
	
		class Student {
			private:
				string name;
				float grades [6];
				string reg_number;
				
				float calculate_total_scores () {
					float sum = 0.0;
					
					for (int i = 0; i < 6; i++) {
						sum += grades [i];
					}
					
					return sum;
				}
				
			public:
				void set_name_and_reg (string& name, string& reg_number) {
					if (name.empty() && reg_number.empty()) {
						cerr << "ERROR: Empty variables detected..." << endl;
						this->name = " ";
						this->reg_number = " ";
						
					}
					else {
						this->name = name;
						this->reg_number = reg_number;
					}
				}
				void get_details () {
					string n, reg;
					cout << "Enter student name: ";
						getline(cin, n);
							if (n.empty()) {
								cout << "Enter student name: ";
									getline (cin, n);
							}
					cout << "Enter student reg number: ";
						getline(cin, reg);
							if (n.empty()) {
								cout << "Enter student reg number: ";
									getline (cin, reg);
							}
							
					set_name_and_reg (n, reg);
					cout << "Enter 6 marks for 6 modules: ";
					for (int i = 0; i < 6; i++) {
						cin >> this->grades [i];
					}
				}
					
					float calculate_avg () {
						return calculate_total_scores () / 6.0;
					}		
					
					void display_student_details ()  {
						cout << "##############STUDENT DETAILS####################" << endl;
						cout << "Student name   : " << this->name << endl;
						cout << "Student reg num: " << this->reg_number << endl;
						cout << "Total scores   : " << calculate_total_scores() << endl;
						cout << "Average score  : " << fixed << setprecision (2) << calculate_avg () << endl;
						cout << "#################################################" << endl;
					}
				
				
				
		};
		
		
		int main () {
			
			Student student;
			
			student.get_details();
			student.display_student_details();
			
			
			
			return 0;
			
		}