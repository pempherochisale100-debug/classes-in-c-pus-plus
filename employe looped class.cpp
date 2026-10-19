#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Employee {
			private:
				string name;
				int employee_id;
				float salary;
				
			public:
				void get_employee_details () {
					string name;
					int employee_id;
					float salary;
					
					do {
						cin.ignore();
						cout << "Enter employee name: ";
							getline (cin, name);
								if (!(name.empty())) {
									this->name = name;
								}
								else {
									//throw invalid_argument {"ERROR: Name is required"};
									break;
								}
					}while (name.empty());
					
					do {
						cout << "Enter employee's id number: ";
							cin >> employee_id;
								if (cin.fail() || employee_id < 0) {
									cin.clear();
									cin.ignore(numeric_limits<streamsize>::max(), '\n');
									employee_id = 0;
								}
								else {
									this->employee_id = employee_id;
									break;
								}
								cin.ignore();
					}while (true);
					
					do {
						cout << "Enter employee's salary: MWK";
							cin >> salary;
								if (cin.fail() || salary < 0) {
									cin.clear();
									cin.ignore(numeric_limits<streamsize>::max(), '\n');
									salary = 0.0;
								}
								else {
									this->salary = salary;
									break;
								}
								cin.ignore();
					}while (true);
				}
				
				void display_employee_details () const {
					cout << endl;
					cout << "##########################################################\n";
					cout << "                      EMPLOYEE DETAILS                    \n";
					cout << "##########################################################\n";
					cout << "Employee's name  : " << this->name << endl;
					cout << "Employee's id    : " << this->employee_id << endl;
					cout << "Employee's salary: MWK" << this->salary << endl;
					cout << "#########################################################\n";
					cout << endl;
				}
		};
		
			int main () {
				
				const int EMPLOYEE_COUNT = 3;
				
				Employee employees [EMPLOYEE_COUNT];
				
				for (int i = 0; i < 3; i++) {
					employees[i].get_employee_details();
				}
				
				cout << endl;
				
				for (int i = 0; i < 3; i++) {
					employees[i].display_employee_details();
				}
				
				
				
				
				system ("pause>0");
				return 0;
			}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		