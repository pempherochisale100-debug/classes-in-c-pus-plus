#include <iostream>
#include <string>

	using namespace std;
	
		class Person {
			protected:
				string fullname;
				int age;
			
			public:
				Person (string f_n, int a) : fullname (f_n), age (a) {
					
				
					if (f_n.empty()) {
						cerr << "\nERROR: Name field must be filled \n";
					}
					else {
						this->fullname = f_n;
					}
					
					if (age < 0) {
						cerr << "\nERROR: Age of a person can not be less than 0 \n";
					}
					else {
						this->age = a;
					}
				}
				void display_details () {
					cout << "Fullname     => " << fullname << endl;
					cout << "Age          => " << age << endl;
				}
		};
		
		
		class Student : public Person {
			private:
				double pro;
				double fcn;
				double calc;
				double total;
				
			public:
				
				Student (string n, int a, double p, double f, double ca) : Person (n, a), pro (p), fcn (f), calc (ca) {
					
				}
				
				double calculate_total () {
					total = pro + fcn + calc;
					return total;
				}
				
				double get_total () {
					return total;
				}
				
				double calculate_average ()  {
					return get_total () / 3.0;
				}
				
				void display_student () {
					
					//double placeholder = calculate_average ();
					display_details ();
					cout << "Total marks    => " << calculate_total () << endl;
					cout << "Average mark   => " << calculate_average () << endl;
				}
		};
		
		
				int main () {
					
					string name;
					double prog, fund, calcu;
					int age;
					
						cout << "Enter full name: ";
							getline (cin, name);
							
						cout << "Enter three grades: ";
							cin >> prog >> fund >> calcu;
							
						cin.ignore();
						
					cout << "Enter age of the student: ";
						cin >> age;
						cin.ignore();
						
					Student student (name, age, prog, fund, calcu );
					
					cout << endl;
					
					student.display_student ();
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					system ("pause>0");
						return 0;
				}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		