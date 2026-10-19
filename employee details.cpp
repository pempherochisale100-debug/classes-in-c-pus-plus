#include <iostream>
#include <string>

	using namespace std;
	
		class Employee {
			
			private:
				string name;
				int age;
				string department;
				
			public:
				void set_details (string n, int a, string dept){
					name = n;
					age = a;
					department = dept;
					cout << "SUCCESS: The data has been successfully set \n";
				}
			
				void display_info () {
					cout << "Name      => " << name << endl;
					cout << "Age       => " << age << endl;
					cout << "Department=> " << department << endl;
				}
		};
		
			int main () {
				
				string name, depart;
				int age;
					cout << "Enter employee name: ";
						getline (cin, name);
					cout << "Enter age of the employee: ";
						cin >> age;
						cin.ignore();
					cout << "Enter department: ";
						getline (cin, depart);
						
					
			//Employee.Employee(name, age, depart);
			
			Employee employee;
			
			employee.set_details(name, age, depart);
			cout << endl << endl;
			employee.display_info();				
				
				
				
				
				
				
				
				system ("pause>0");
					return 0;
			}