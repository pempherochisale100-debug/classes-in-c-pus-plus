#include <iostream>
#include <string>

	using namespace std;
	
		class Employee_calc {
			private:
				string employee_name;
				double basic_salary;
				double transport_allowance;
				double total_salary;
			
			public: 
				
				void enter_details (string name, double b_s, double t_a) {
					if (b_s <= 0) {
						cerr << "ERROR: Salary amount can't be <= 0 \n";
						
					}
					else if (t_a <= 0) {
						cerr << "ERROR: No transport allowance allocated \n";
					}
					else {
						this->employee_name = name;
						this->basic_salary = b_s;
						this->transport_allowance = t_a;
						
						cout << "SUCCESS: Data has been successfully added \n";
					}
				}
				
				double total () {
					return this->total_salary = basic_salary + transport_allowance;
					
				}
				
				void function () {
					cout << "############################################\n";
					cout << "             EMPLOYEE SUMMARY				 \n";
					cout << "############################################\n";
					
						cout << "Employee name ====> " << employee_name << endl;
						cout << "Basic salary  ====> " << basic_salary << endl;
						cout << "Transport     ====> " << transport_allowance << endl;
						cout << "Total salary  ====> " << total() << endl;
				}
			
			
		};
		
			int main () {
				
				Employee_calc employee;
				
				string e_name;
				double init_salary, t_allowance;
				
					cout << "###########################################\n";
					cout << "               EMPLOYEE DASHBOARD			\n";
					cout << "###########################################\n";
					
						cout << "Enter the employee's name: ";
							getline (cin, e_name);
						cout << "Enter basic salary: ";
							cin >> init_salary;
							cin.ignore();
						cout << "Enter transport allowance amount: ";
							cin >> t_allowance;
							cin.ignore();
							
				employee.enter_details(e_name, init_salary, t_allowance);
				cout << endl;
				employee.function();		
				
				
				
				
				
				
				
				
				system ("pause>0");
					return 0;
			}