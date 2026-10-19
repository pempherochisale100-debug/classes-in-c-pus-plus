#include <iostream>
#include <string> 
#include <limits>

	using namespace std;
	
		class Employee {
			private:
				string employee_name;
				double basic_salary;
				
			public:
				
				Employee () {
					employee_name = "Unknown";
					basic_salary = 0.0;
				}
				
				void set_employee_details () {
					cout << "Enter fullname of the employee: ";
						getline (cin, this->employee_name);
							if (employee_name.empty()){
								cerr << "ERROR: Name of the employee must be filled \n";
							}
							
					cout << "Enter basic salary of the employee: ";
						cin >> this->basic_salary;
							if (cin.fail() || basic_salary < 0) {
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max (), '\n');
								cerr << "ERROR: Salary must be a positive value \n";
								basic_salary = 0.0;
							}
				}
				
				void display_employee_details () {
					cout << "Employee name   => " << employee_name << endl;
					cout << "Basic salary    => " << basic_salary << endl;
				}
				
				double get_salary () {
					return basic_salary;
				}
				
				~Employee () {
					cout << "\nDestructor has been called \n";
				}
		};
		
		
		class Manager : public Employee {
			private:
				double transport_allowance;
				double housing_allowance;
				
			public: 
			
				 
				
				void allowances () {
					
					set_employee_details();
					
					cout << "Enter transport allowance for this employee: ";
						cin >> transport_allowance;
							if (cin.fail() || transport_allowance < 0) {
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								cerr << "ERROR: Transport allowance must be a positive number \n";
								transport_allowance = 0.0;
							}
							
					cout << "Enter housing allowance for the employee: ";
						cin >> housing_allowance;
							if (cin.fail() || housing_allowance < 0) {
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								cerr << "ERROR: Housing allowance for the employee must be a positive number \n";
								housing_allowance = 0.0;
							}
				}
				
				double calculate_total_salary () {
					double total = get_salary () + transport_allowance + housing_allowance;
						return total;
				}
				
				void display_managers_details () {
					display_employee_details ();
					cout << "Transport allowance => " << transport_allowance << endl << endl;
					cout << "Housing allowance   => " << housing_allowance << endl << endl;
					cout << "Total salary        => " << calculate_total_salary ( ) << endl;
				}
		};
		
		
			int main () {
				
				
				Manager manager;
				
				manager.allowances();
				
				cout << endl << endl;
				
				manager.display_managers_details();
				
				
				
				
				
				
				
				
				
				
				
				
				system ("pause>0");
					return 0;
			}