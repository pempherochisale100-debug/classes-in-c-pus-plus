#include <iostream>
#include <limits>
#include <string>

	using namespace std;
	
		class Employee {
			protected:
				double salary;
				string employee_name;
				
			public:
				
				Employee () {
					this->salary = 0.0;
					this->employee_name = "Unknown";
				}
				
				void set_data_members (string name, double s){
					this->employee_name = name;
					this->salary = s;
					cout << "\nSUCCESS: Data members has been set successfully \n";
				}
				
				void display_details () {
					cout << "Employee name      => " << this->employee_name << endl;
					cout << "Employee's salary  => MWK" << this->salary  << endl;
				}
		};
		
		class Manager : public Employee {
			protected:
				double bonus;
				
			public:
				
				Manager () {
					this->bonus = 0.0;
				}
				
				void set_manager_details (double b, string name, double s) {
					this->bonus = b;
					this->salary = s;
					this->employee_name = name;
				} 
				
				void display_manager_details () {
					display_details ();
					cout << "Manager's bonus    => MWK" << bonus << endl;
					cout << "Total amount       => MWK" << (bonus + salary) << endl;
				}
				
		};
		
		
		int main () {
			
			string nm;
			double sal, bon;
				
				cout << "Enter name of the employee: ";
					getline (cin, nm);
			
				cout << "Enter basic salary: ";
					cin >> sal;
					
				cout << "Enter bonus: ";
					cin >> bon;	
			
			Manager manager;
			manager.set_manager_details(bon, nm, sal);
			
			cout << endl;
			
			manager.display_manager_details();
			
			
			
			system ("pause>0");
				return 0;
		}