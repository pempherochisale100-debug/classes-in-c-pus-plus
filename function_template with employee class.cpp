
#include <iostream>

	using namespace std;
	
	template <typename T>
	
	class Employee {
		private:
			T gross;
			T salary;
			T allowance;
			T tax;
			
		public:
			
			void get_details () {
				cout << "Enter basic salary of the employee: MWK";
					cin >> this->salary;
				cout << "Enter tax amount: MWK";
					cin >> this->tax;
				cout << "Enter allowances: MWK";
					cin >> this->allowance;
			}
		
			
			T get_gross () {
				return this->salary + this->allowance;
			}
			
			T get_net () {
				return (get_gross () - this->tax);
			}
			
			void display () {
				cout << "------------------------------------------------------\n";
				cout << "                   EMPLOYEE DETAILS                   \n";
				cout << "------------------------------------------------------\n";
				cout << "Employee's basic salary: MWK" << this->salary << endl;
				cout << "Employee's allowance   : MWK" << this->allowance << endl;
				cout << "Employee's tax amount  : MWK" << this->tax << endl;
				cout << "Employee's gross pay   : MWK" << get_gross () << endl;
				cout << "Employee's net pay     : MWK" << get_net () << endl;
				cout << "------------------------------------------------------\n";
			}
			
	};
	
		int main () {
			
			Employee<double> employee;
			employee.get_details();
			employee.display();
			
			
			
			
			return 0;
		}