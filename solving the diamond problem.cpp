// the following program will use virtual inheriatance to solve the diamond problem 
#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		// class Person is the base class where the student class and employee class will inherit from 
		class Person {
			protected:
				string name;
				
			public: 
			
				Person () : name (" ") {
					
				}
				
				void set_name (string name) {
					if (!name.empty()) {
						this->name = name;
					}
				}
				
				// the fllowing function will help to print the peron details ,i.e name
				void display_person () {
					cout << "Name of the person : " << this->name << endl;
				}
				// the following is a getter function that will be used to return the name ofthe person whereever iti 
				// is needed 
				string get_name () const {
					return this->name;
				}
				~Person () {
					cout << "Destructor called for the Person class..." << endl;
				}
			
		};
		
		class Student : virtual public Person {
			private:
				string reg_number;
				
			public:
				
				Student () : reg_number (" ") {
					
				}
				
				void set_registration (string reg_number) {
					if (!reg_number.empty()) {
						this->reg_number = reg_number;
					}
				}
				// the following function will hekp in diplaying the details of the student 
				void display_student () {
					cout << get_name () << " is a student with a registration number of " << get_reg () << endl;										
					
				}
				// the following function is a getter to get the student regi number 
				string get_reg () const {
					return this->reg_number;
				}
				// the following part defines the destructo of the Student class
				~Student () {
					cout << "Destructor called for the student class..." << endl;
				}
	
		};
		
		class Employee : virtual public Person {
			private:
				string employement_number;
				
			public:
				// the following is public parameterized contructor
				Employee () {
					this->employement_number = " ";
				}
				
				void set_emp_num (string  employement_number) {
					if (!employement_number.empty ()) {
						this->employement_number = employement_number;
					}
					else {
						cout << "Empty employement number detected..." << endl;
						//continue;
					}
				} 
				// the following is a public getter function to retrieve the emp_num 
				// of the employee
				string get_emp_num () const {
					return this->employement_number;
				}
				// the follwoing function will display the details of the employee
				void display_employee () {
					cout << get_name () << " is an employee with employement number of " << get_emp_num () << endl;
				}
				// the following defines the public destructor of this class 
				~Employee () {
					cout << "Destructor for the class employee ha been called..." << endl;
				}
				
		};
		
		class Working_student : public Student, public Employee {
			private:
				double transport_allowance;
				double basic_salary;
				double tax;
				
			public:
				
				Working_student () {
					this->transport_allowance = 0.0;
					this->basic_salary = 0.0;
					this->tax = 0.0;
				}
				
				void set_working_student () {
					string name, reg_num, emp_num;
					
						cout << "Enter name of the student: ";
							getline (cin, name);
							set_name (name);
						
						cout << "Enter registration number for " << get_name () << " : ";
							getline (cin, reg_num);
							set_registration (reg_num);
						
						cout << "Enter employement number for " << get_name () << " : ";
							getline (cin, emp_num);
							
						cout << "Enter basic salary of the working student: MWK";
							cin >> this->basic_salary;
							
						cout << "Enter tax amount on the salary entered   : MWK";
							cin >> this->basic_salary;
							
						cout << "Enter transport allowance of the student : MWK";
							cin >> this->transport_allowance;
							
						cin.ignore(numeric_limits<streamsize>::max (), '\n');	
						 
				}
				
				double get_allowance () const {
					return this->transport_allowance;
				}
				// the following fucntion will help to calculate total salary of the working student
				double get_salary () {
					return (get_allowance() + get_basic_salary ()) - get_tax ();
				}
				double get_basic_salary () const {
					return this->basic_salary;
				}
				double get_tax () const {
					return this->tax;
				}
				// the following function will help displaying the details of a working student
				void display_working_student () {
					cout << string (80, '#') << endl;
					cout << "                WORKING STUDENT DETAILS                  " << endl;
					cout << string (80, '#') << endl;
					cout << "Name of working student : " << get_name () << endl;
					display_student ();
					display_employee ();
					double sal = get_salary ();
					cout << "Total salary             : MWK" << sal << endl;
					cout << string (80, '#') << endl;
				}
				// the following is a destructor of the working_student class
				~Working_student () {
					cout << "Working student destroyed..." << endl;
				}
			
		};
		
		
			int main () {
				
				Working_student student;
				student.set_working_student();
				student.display_working_student();
				
				
				
				
				return 0;
			}
		
		
		
		