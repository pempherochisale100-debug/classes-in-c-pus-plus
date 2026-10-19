#include <iostream>
#include <string>

	using  namespace std;
	
		class Student {
			// the following members will be declared as private 
			//private:
				string name;
				int age;
				string reg_number;
				//float marks [6];
				char grade;
				
			public : 
				
				Student () {
					name = "Flora";
					age = 25;
					reg_number = "bse/25/ss/006";
					cout << "Default constructor called \n";
				
				}
				
				void set_details () {
					cout << "Enter your full name: ";
						getline (cin, this->name);
							if (name.empty()) {
								cout << "Enter name: ";
								name = "Unknown";
							}
							
					cout << "Enter age: ";
						cin >> this->age;
							if (cin.fail() || age < 0 || age == 0) {
								cout << "Either you are not born, you are just born or you have entered invalid age \n";
								cin.clear();
								
								age = 0;
							}
						cin.ignore();	
					cout << "Enter registartion number: ";
						getline (cin, this->reg_number);
							if (reg_number.empty ()) {
								cout << "ERROR: Registration number is needed \n";
							}
							
							 
						}
				
				/*
				Student (string n, int a, string reg) {
					if (n.empty()){
						cerr << "ERROR: Name must be filled \n";
					}
					else {
						this->name = n;
					}
					if (a < 0 ) {
						cerr << "ERROR: Age must be a positive vlaue \n";
						age = 0;
					}
					else {
						this->age = a;
					}
					if (!reg.empty()) {
						this->reg_number = reg;
					}
					else {
						cout << "EEROR: Registration number be filled \n";
					}
				}
				
				
				//constructors => special mebers functions defined within a class
				// it's role is to initialise data members 
				// types  => 
							// 1. default con, 2. default, parameterised  3. user defined constructor
				
				void set_details (string &name, int age, string &reg_number) {
					this->name = name;
					this->age = age;
					this->reg_number = reg_number;
					
				}
				*/
				void display_details_student () {
					cout << "Full name  => " << name << endl;
					cout << "Age        => " << age << endl;
					cout << "Reg nimbers=> " << reg_number << endl;
				}
				
				// destrcutors are special functions that are called when an instance of an object is being destroyed 
				
				~Student () {
					cout << "Destrcuctor for " << name << " has been called \n";
				}
				
				
		};
		/*
		class Employee : public Student {
			string name;
			double salary;
			
			public:
				 void set_employee_details () {
				 	this->name = "employee one";
				 	this->salary = 4869574.4587;
				 }
				 
				 void display_details () {
				 	display_details_student();
				 	cout << "Employee name => " << this->name << endl;
				 	cout << "Employee salary => " << this->salary << endl;
				 }
		};
		*/
		
		int main () {
			
			//string na = "flora", reg_num = "jfsgmhsd";
			//int a = -30;
			
			Student student ;//(na, a, reg_num);
			
			student.set_details();
			//student.set_details("pemphero", 21, "bcs/25/ss/004");
			
			student.display_details_student();
		//Employee employee; 	
			
		//employee.display_details();	
			
			
			
		}