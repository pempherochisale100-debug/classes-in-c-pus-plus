#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Person {
			protected:
				string fullname;
				int age;
				
			public:
				
				void set_details () {
					cout << "Enter name of the person: ";
						getline (cin, fullname);
							if (fullname.empty()) {
								cerr << "\nERROR: Name attribute must be filled \n";
								
						}
						
					//	cin >> fullname;
							
					do {
						cout << "Enter age of the person: ";
						cin >> age;
							if (cin.fail() || age < 0) {
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								cerr << "\nERROR: Age must be positive and not a string \n";
								age = 0;
							}
							else {
								break;
							}
					}while (true);
				}
				
				void display_details () {
					cout << "Full name => " << fullname << endl;
					cout << "Age       => " << age << endl;
				}
		};
		
		
		class Student : public Person {
			protected:
				double marks[3];
				double *ptr = marks;
				
			public:
				
				void set_student_marks (){
					set_details ();
					cout << "Enter three marks of a student: ";
						for (int i = 0; i < 3; i++) {
							cin >> marks [i];
						}
				}
				
				double calculate_total () {
					double total;
					for (int i = 0; i < 3; i++) {
						total += *(ptr + i);
					}
					return total;
				}
				
				double calculate_average () {
					double avg = calculate_total () / 3.0;
					return avg;
				}
				
				void display_student_details () {
					display_details ();
					for (int i = 0; i < 3; i++) {
						cout << "Mark " << i + 1 << " " << *(ptr + i) << "\n";
						
						
					}
					
					cout << "mark 1 "<< marks [0] << endl;
					cout << "mark 2 "<< marks [1] << endl;
					cout << "mark 3 "<< marks [2] << endl;
					cout << "Total score => " << calculate_total () << endl;
					cout << "Average mark => " << calculate_average () << endl;
				}
				
		};
		
		int main () {
			
			Student student;
			
			student.set_student_marks ();
			
			cout << endl;
			
			student.display_student_details();
			
			
			
			
			system ("pause>0");
				return 0;
		}
		
		
		
		
		
		
		
		
		