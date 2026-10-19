#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Student {
			private:
				string full_name;
				string registration_number;
				
			public:
				
				virtual long long calculate_total_fees () = 0;
				
				virtual void display_student_details () = 0;
				
				void set_name (string name) {
					if (name.empty()) {
						cerr << "ERROR: Name attribute is required!!! \n";
						this->full_name = "";
					}
					else {
						this->full_name = name;
					}
				}  
				string get_name () const {
					return this->full_name;
				}
				
				void set_reg_num (string registration_number) {
					if (registration_number.empty()) {
						cerr << "ERROR: Enter registration number \n";
						this->registration_number = "";
					}
					else {
						this->registration_number = registration_number;
					}
				}
				string get_registration_number () const {
					return this->registration_number;
				}
				
				~Student () {
					
				}
				
				
		};
		
		class Local_student : public Student {
			private:
				double tuition_fees;
				double accomodation_fees;
				double registration_fees;
				int number_of_semesters;
				
				
			public:
					void set_tuition (double fee) {
						if (fee <= 0.0) {
							cout << "Enter positive fees \n";
							this->tuition_fees = 0.0;
						}
						else {
							this->tuition_fees = fee;
						}
					}
					
					void set_reg (double fee) {
						if (fee <= 0.0) {
							cout << "Enter positive fees \n";
							this->registration_fees = 0.0;
						}
						else {
							this->registration_fees = fee;
						}
					}
					
					void set_accomodation (double fee) {
						if (fee <= 0.0) {
							cout << "Enter positive fees \n";
							this->accomodation_fees = 0.0;
						}
						else {
							this->accomodation_fees = fee;
						}
					}
					
					void set_semester (double number) {
						if (number <= 0.0) {
							cout << "Enter positive fees \n";
							this->number_of_semesters = 0.0;
						}
						else {
							this->number_of_semesters = number;
						}
					}
					
					double get_reg () const {
						return this->registration_fees;
					}
					
					double get_tui () const {
						return this->tuition_fees;
					}
					
					double get_acco () const {
						return this->accomodation_fees;
					}
					
					int get_semester () const {
						return this->number_of_semesters;
					}
					
					void set_local_student_details () {	
							double tuition_fees;
							double accomodation_fees;
							double registration_fees;
							int number_of_semesters;
							string name, reg;
							cout << "##############################################################\n";
							cout << "                    ENTERING LOCAL STUDENT DETAILS             \n";
							cout << "##############################################################\n";
								do {
									cout << "Enter student full name: ";
									getline (cin, name);
								} while (name.empty());
								set_name (name);
								
								do {
									cout << "Enter registration number: ";
									getline (cin, reg);
								} while (reg.empty());
								set_reg_num (reg);
								
								do {
									cout << "Enter tuition fees of a local student: ";
									cin >> tuition_fees;
									if (cin.fail ()) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');
									}
									else {
										break;
									}
								} while (true);
								set_tuition (tuition_fees);
								
								do {
									cout << "Enter accomodation fees for the local student: ";
									cin >> accomodation_fees;
									if (cin.fail ()) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');
									}
									else {
										break;
									}
								} while (true);
								set_accomodation (accomodation_fees);
								
								do {
									cout << "Enter registration fees for the local student: ";
									cin >> registration_fees;
									if (cin.fail ()) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');
									}
									else {
										break;
									}
								} while (true);
								set_reg (registration_fees);
								do {
									cout << "Enter number of semesters to calculate fees: ";
									cin >> number_of_semesters;
									if (cin.fail ()) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');
									}
									else {
										break;
									}
								} while (true);
								set_semester (number_of_semesters);
								}
								
					
				void display_student_details () override {
					cout << "##############################################################\n";
					cout << "                   LOCAL STUDENT DETAILS                     \n";
					cout << "##############################################################\n";
					cout << "Student name          : " << get_name () << endl;
					cout << "Registration number   : " << get_reg () << endl;
					cout << "Tuition fees          : " << get_tui () << endl;
					cout << "Registration fees     : " << get_reg () << endl;
					cout << "Accomodation fees     : " << get_acco () << endl;
					cout << "Number of semesters   : " << get_semester () << endl;
					 
				}
				long long calculate_total_fees () override {
					long long total = (get_tui () + get_reg () + get_acco ()) * get_semester ();
					return total;
				}
		};
		
		class International_student : public Student {
			private:
				double tuition_fees;
				double accomodation_fees;
				double registration_fees;
				int number_of_semesters;
				
				
			public:
					void set_tuition (double fee) {
						if (fee <= 0.0) {
							cout << "Enter positive fees \n";
							this->tuition_fees = 0.0;
						}
						else {
							this->tuition_fees = fee;
						}
					}
					
					void set_reg (double fee) {
						if (fee <= 0.0) {
							cout << "Enter positive fees \n";
							this->registration_fees = 0.0;
						}
						else {
							this->registration_fees = fee;
						}
					}
					
					void set_accomodation (double fee) {
						if (fee <= 0.0) {
							cout << "Enter positive fees \n";
							this->accomodation_fees = 0.0;
						}
						else {
							this->accomodation_fees = fee;
						}
					}
					
					void set_semester (double number) {
						if (number <= 0.0) {
							cout << "Enter positive fees \n";
							this->number_of_semesters = 0.0;
						}
						else {
							this->number_of_semesters = number;
						}
					}
					
					double get_reg () const {
						return this->registration_fees;
					}
					
					double get_tui () const {
						return this->tuition_fees;
					}
					
					double get_acco () const {
						return this->accomodation_fees;
					}
					
					int get_semester () const {
						return this->number_of_semesters;
					}
					
					void set_local_student_details () {	
							double tuition_fees;
							double accomodation_fees;
							double registration_fees;
							int number_of_semesters;
							string name, reg;
							cout << "##############################################################\n";
							cout << "               ENTERING INTERNATIONAL STUDENT DETAILS             \n";
							cout << "##############################################################\n";
								do {
									cout << "Enter student full name: ";
									getline (cin, name);
								} while (name.empty());
								set_name (name);
								
								do {
									cout << "Enter registration number: ";
									getline (cin, reg);
								} while (reg.empty());
								set_reg_num (reg);
								
								do {
									cout << "Enter tuition fees: ";
									cin >> tuition_fees;
									if (cin.fail ()) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');
									}
									else {
										break;
									}
								} while (true);
								set_tuition (tuition_fees);
								
								do {
									cout << "Enter accomodation fees: ";
									cin >> accomodation_fees;
									if (cin.fail ()) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');
									}
									else {
										break;
									}
									cin.get();
									
								} while (true);
								set_accomodation (accomodation_fees);
								
								do {
									cout << "Enter registration fees: ";
									cin >> registration_fees;
									if (cin.fail ()) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');
									}
									else {
										break;
									}
									cin.get();
								} while (true);
								set_reg (registration_fees);
								do {
									cout << "Enter number of semesters to calculate fees: ";
									cin >> number_of_semesters;
									if (cin.fail ()) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');
									}
									else {
										break;
									}
								} while (true);
								set_semester (number_of_semesters);
								}
								
				
				void display_student_details () override {
					cout << "##############################################################\n";
					cout << "                   INTERNATIONAL STUDENT DETAILS                     \n";
					cout << "##############################################################\n";
					cout << "Student name          : " << get_name () << endl;
					cout << "Registration number   : " << get_reg () << endl;
					cout << "Tuition fees          : MWK" << get_tui () << endl;
					cout << "Registration fees     : MWK" << get_reg () << endl;
					cout << "Accomodation fees     : MWK" << get_acco () << endl;
					cout << "Number of semesters   : " << get_semester () << endl;
				}
				long long calculate_total_fees () override {
					long long total = (get_tui () + get_reg () + get_acco ()) * get_semester ();
					return total;
				}
				
		};
		
		class Run_it {
			public:
				void run_it () {
					int end;
			do {
				
			Student* stud;
			
			Local_student* local;
			//local.set_local_student_details();
			local = new Local_student;// 
			//local.set_local_student_details();
			local->set_local_student_details();
			
			stud = local;
			stud->display_student_details();
			cout << "Total fees            : MWK" << stud->calculate_total_fees() << endl;
			cout << endl;
			International_student* international;
			//international.set_local_student_details();
			international = new International_student;
			//international.set_local_student_details();
			international->set_local_student_details();
			cout << endl;
			
			stud = international;
			stud->display_student_details();
			cout << "Total fees            : MWK" << stud->calculate_total_fees() << endl;
			
			delete stud; stud = nullptr;
			delete local; local = nullptr;
			delete international; international = nullptr;
			
			cout << "Press 0 to exit the program!!!! \n";
			} while (end != 0);
		
				}
		};
		
		
		int main () {
			
			
			Run_it run;
			run.run_it();
			
			
			system ("pause>0");
				return 0;
		}
		
		
		
		