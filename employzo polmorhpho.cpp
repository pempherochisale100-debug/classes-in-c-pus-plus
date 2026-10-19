#include <iostream>
#include <limits>
#include <string>

	using namespace std;
	
		class Employee { 
			private:
				string employee_name;
				int age;
				
			public :
				// a public constructor to set the employee details
				//Employee (string name, int a) : employee_name (name), age (a) {
					
			//	}
				void set_name (string n) {
					this->employee_name = n;
				}
				void set_age (int a) {
					this->age = a;
				}
				
				string get_name () {
					return this->employee_name;
				}
				int get_age () {
					return this->age;
				}
				// a pure virtual function which will be overriden by the derived classes
				virtual void display_employee_details () = 0;
				
				void print_local_details () {
					cout << "EMPLOYEE NAME          : " << get_name () << endl;
					cout << "EMPLOYEE AGE           : " << get_age () << endl;
				}
				
				// a public virtual destructor to clean up the resourcs when the program has finished excuting
				~Employee () {
					
				}
		};
		
		class Permanent_employee : public Employee {
			private:
				double permanent_salary;
			//	double rate;
				double total_salary;
				double transport_allowance;
				
			public: 
			/*
				Permanent_employee (string name, int a, double salary, double trans) : 
								Employee (name, a), permanent_salary (salary),
								transport_allowance (trans) {
									
						if (name.empty()) {
							cerr << "ERROR: Name attribute must be filled \n";
						}
						if (a <= 0 || trans <= 0.0 || salary <= 0.0 ) {
							cerr << "ERROR: The age you entered is invalid \n";
						}
								}  */
								
				void set_permanent_employee_details ()  {
					string n;
					int ag;
				//	double salary, transport;
					
					cout << "Enter fullname of the employee: ";
						getline (cin, n);
						if (n.empty ()) {
							cout << "Name must be filed \n";
						}
					set_name (n);
					cout << "Enter age: ";
						cin >> ag;
						if (cin.fail() || ag < 0) {
							cin.clear();
							cerr << "ERROR: Age is a positive number \n";
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							ag = 0;
						}
						cin.ignore(numeric_limits<streamsize>::max (), '\n');
						set_age (ag);
					cout << "Enter basic salary of this permanent employee :";
						cin >> this->permanent_salary;
						if (cin.fail() || this->permanent_salary < 0.0) {
							cin.clear();
							cerr << "ERROR: Salary is a positive number \n";
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							this->permanent_salary = 0.0;
						}
						cin.ignore(numeric_limits<streamsize>::max (), '\n');
					cout << "Enter Total transport allowance: ";
						cin >> this->transport_allowance;
							if (cin.fail() || this->transport_allowance < 0) {
							cin.clear();
							cerr << "ERROR: Transport allowance is a positive number \n";
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							this->transport_allowance = 0;
						}
						cin.ignore(numeric_limits<streamsize>::max (), '\n');
						
				
				}
				
				double calculate_total_salary () {
					this->total_salary  = this->transport_allowance + this->permanent_salary;
					return this->total_salary;
				}
				
				void display_employee_details () override {
					cout << "-----------------------------------------------------------\n";
					cout << "-----------------PERMANENT EMPLOYEE DETAILS----------------\n";
					cout << "-----------------------------------------------------------\n";
					print_local_details ();
					double total = calculate_total_salary ();
					cout << "EMPLOYEE SALARY        : " << this->permanent_salary << endl;
					cout << "EMPLOYEE TPT ALLOWANCE : " << this->transport_allowance << endl;
					cout << "EMPLOYEE TOTAL SALARY  : " << total << endl;
					cout << "EMPLOYEE CATEGORY      : Permanent employee " << endl; 
				}	
				
				
				
		};
		
		class Part_time_employee : public Employee {
			private:
				double working_hours;
				double hourly_pay;
				double total_salary;
				double transport_allowance;
				
			public:
				
				void set_working_hours (double hours) {
					if (hours <= 0) {
						cout << "Enter a positive number plz!!!!! \n";
					}
					else {
						this->working_hours = hours;
					}
				}
				
				void set_part_time_employee_details () {
					string name;
					int age;
					double hrs;
					cout << "Enter part time employee name: ";
						getline (cin, name);
							if (name.empty ()) {
								cerr << "ERROR: Name attribute is needed \n";
							}
						set_name (name);
					cout << "Enter age of the part time employee: ";
						if (!(cin >> age || age > 0)) {
							cin.clear();
							cerr << "ERROR: Age is a positive number and not a string \n";
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							age = 0;
						}
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						set_age (age);
						
					cout << "Enter part time employee hoourly rate: MWK";
						if (!(cin >> this->hourly_pay || hourly_pay > 0)) {
							cin.clear();
							cerr << "ERROR: Hourly pay is a positive number and not a string \n";
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							this->hourly_pay = 0;
						}
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Enter time spent working(hrs)): ";
						if (!(cin >> hrs || hrs > 0)) {
							cin.clear();
							cerr << "ERROR: Working hours is a number and not a string \n";
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							hrs = 0;
						}
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						
					cout << "Enter transport allowance: MWK";
						if (!(cin >> this->transport_allowance || transport_allowance > 0)) {
							cin.clear();
							cerr << "ERROR: Transport allowance is a number and not a string \n";
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							this->transport_allowance = 0;
						}
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						set_working_hours (hrs);
				}
				
				double calculate_total () {
					this->total_salary = ((this->hourly_pay * this->working_hours) + this->transport_allowance);
					return this->total_salary;
				}
				
				void display_employee_details () override {
					cout << "-----------------------------------------------------------\n";
					cout << "----------------PART-TIMER EMPLOYEE DETAILS----------------\n";
					cout << "-----------------------------------------------------------\n";
					cout << "Part time employee name: " << get_name () << endl;
					cout << "Part time employee age : " << get_age () << endl;
					cout << "Hourly pay             : MWK" << this->hourly_pay << endl;
					cout << "Working hours          : " << this->working_hours << " hours" << endl;
					double ttal = calculate_total ();
					cout << "Transport allowance    : MWK" << this->transport_allowance << endl;
					cout << "Total salary           : MWK" << ttal << endl;
					cout << "Category               : Part time employee " << endl;
				}
		};
		
		int main () {
			
			Employee* base;
			Permanent_employee emp_1;
			emp_1.set_permanent_employee_details();
			
			cout << endl;
			
			Part_time_employee part_timer;
			part_timer.set_part_time_employee_details();
			
			base = &emp_1;
			
			base->display_employee_details();
			
			
			cout << endl << endl;
			
			base  = &part_timer;
			base->display_employee_details();
			
			
			
			system ("pause>0");
				return 0;
		}