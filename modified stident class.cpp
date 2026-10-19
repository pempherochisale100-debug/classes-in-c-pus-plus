#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Person {
			protected:
				string fullname;
				int age;
				
			public:
				
				void set_name_and_age () {
					
					cout << "Enter name of the person: ";
						getline (cin, this->fullname);
							if (fullname.empty ()){
								cerr << "\nERROR: Name of the student must be filled \n";
							}
					cout << "Enter age of the student: ";
						cin >> age;
							if (cin.fail() || age < 0) {
								cin.clear();
								cerr << "\nERROR: Age must be a positive number \n";
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								age = 0;
							}
							cin.ignore();
						
				}
				
				void display_details () {
					cout << "Fullname of then employee   => " << fullname << endl;
					cout << "Age of the employee         => " << age << endl;
				}
		};
		
		
		
		class Student : public Person {
			private:
				double mark[3];
				
				double* ptr = mark;
				//double total;
				//double average;
				
			public: 
			
				void set_grade () {
					
					set_name_and_age ();
					
					for (int i = 0; i < 3; i++) {
						cout << "Enter grade " << i + 1 << " mark for stuudent: ";
						cin >> mark [i];
						cout << endl;
					}
				}
				
				double calculate_total () {
					
					double total = 0.0;
					for (int i = 0; i < 3; i++) {
						total += *(ptr + i);
					}
					
					return total;
				}
				
				double calculate_average () {
					double average = calculate_total () / 3.0;
					return average;
				}
				
				void display_student_data () {
					
					display_details ();
					
						for (int i = 0; i < 3; i++) {
							cout << "mark " << i + 1 << " = " << *(ptr + i) << "\n";
						}
					cout << "Total marks      => " << calculate_total () << endl;
					cout << "Average mark     => " << calculate_average () << endl;
				}
		};
		
		
		
		
		int main () {
			
			Student student;
			
			student.set_grade();
			
			cout << endl;
			
			student.display_student_data();
			
			
			
			system ("pause>0");
				return 0;
		}