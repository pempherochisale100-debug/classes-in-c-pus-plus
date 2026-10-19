

// oop 
// classes
// inheritance 
// polymo
// abstraction 
// data hiding
// encapsulation 
// objects 
// cons and des
// getters and setters (functions)

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
  
  	using namespace std;
  	
  	//cin.ignore();
  	
  	class Student {
  		private:
  			
  			string name ;
  			string reg_num ;
  			int age ;
  			string gender ;
  			
  		public:
  			
  			// this the public setter function to set and validate the user input
  			//void set_details (string name, string reg_num, int age, string gender) {
  				
				
				
				
				
				
			/*	if (name.length() <= 5 && name.empty() && age <= 0 && reg_num.length() <= 12 && reg_num.empty () && gender.length() <= 3 && gender.empty ()) {
					cout << "ERROR: An error occured \n";
				} 
				else {
					this->name = name;
					this->reg_num = reg_num;
					this->age = age;
					this->gender = gender;
				}*/
				  
			 // }
  			
  			
  			// the following functions are tthe setter functions to set the private meber details
  			void set_name (string name) {
  				if (name.length() <= 5) {
				  cerr << "Then name must be greater 5 characters \n";
				}
				else if ( name.empty()) {
					cerr << "Name attribute is required in this context \n";
				}
				else {
					this->name = name;
				}
			  }
  		
		  
		  	void set_reg (string reg) {
		  		
				  	this->reg_num = reg;
				  
 			  }
  			void set_age (int age) {
  				if (age <= 0) {
					cout << "Age must be positive \n";
				}
				else {
					this->age = age;
				}
			  }
		  	void set_gender (string gender) {
		  		if (gender.empty() && gender.length () <= 3) {
					cerr << "ERROR: Gender is needed here \n";
				}
				else {
					this->gender = gender;
				}
			  }
		  	
		  	// the following functions will be the getter functions to get the private data mebers 
		  	string get_name () const {
		  		return this->name;
			  }
			  string get_reg () const {
			  	return this->reg_num;
			  }
			  
			  int get_age () const {
			  	return this->age;
			  }
			  
			  string get_gender () const {
			  	return this->gender;
			  }
		  
		  	void display_student_details () const{
  				cout << "Student name   => " << get_name () << endl;;
  				cout << "Student reg num=> " << get_reg () << endl;
  				cout << "Student gender => " << get_gender () << endl;
  				cout << "Student age    => " <<  get_age () << endl;
  				
			  }
			 
			 // this function will prompt the user for the required details and get them 
			 // after getting the details tyhe function will invoke the public setter function to 
			 // set the private data members of the class 
			void get_details_from_user ()  {
			string name, reg, gender;
			int age, exiter;
			
			
				// getting the student name from the user 
				do {
					cout << "Enter student name: ";
						getline (cin, name);
				} while (name.empty() || name.length () <= 5);
				set_name (name);
				cin.ignore();
				
				do {
					cout << "Enter student registration number: ";
						getline (cin, reg);
				} while (reg.length () <= 12 || reg.empty ());
				
				
				
				set_reg (reg_num);
				
				// getting the student age from the user
				do {
					cout << "Enter student age: ";
						cin >> age;
						if (cin.fail() || age <= 0) {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							age = 0;
						}
						else {
							break;
						}
						
				} while (true);
				set_age (age);
				cin.ignore();
				
				
				// getting the student gender from the user
				do {
					cout << "Enter student gender: ";
						getline (cin, gender);
				} while (gender.length () <= 3 || gender.empty ());
				set_gender (gender);
				
				// invoking the setter function and passing all the details obtained from the user
				//set_details (name, reg, age, gender);
			}
		
	  };
	  
	  class Local_student : public Student {
			private:
				long long tuition_fees = 650000;
				long long accomodation_fees = 108000;
				
			public:
				
				void display_local_student () const{
					display_student_details ();
					cout << "Accomodation fees  => MWK" << this->accomodation_fees << endl;
					cout << "Tuition fess       => MWK" << this->tuition_fees << endl;
					  
				}
	  };
	  
	  class Derived_from_local : public Student {
	  	
	  };
	  
	  class Both : public Local_student, public Derived_from_local {
	  	
	  };
	  
	  int main () {
	  	
	  	Student  local;
	  	
	  	local.get_details_from_user();
	  	
	  	local.display_student_details();
	  	
	  	Derived_from_local locally;
	  	
	  	locally.display_student_details();
	  	
	  	Both both;
	  	both.display_local_student();
	  	
	  	
	  	
	  	
	  	system ("pause>0");
	  		return 0;
	  }
	  
	  