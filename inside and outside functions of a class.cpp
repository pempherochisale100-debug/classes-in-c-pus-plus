#include <iostream>
#include <string>

	using namespace std;
	
		class Student {
		
			private: 	
			string name;
			int age;
			string email;
			string reg_num;
			string programme;
			int phone_number;
			bool enroll_status;
			bool activeness;
			
			public:
				
				Student (string n, int ag, string e, string r_n, string pr, int p_num, bool enrolled, bool active){
					if (ag <= 18) {
						cerr << "ERROR: You too young to be enrolled at the university \n"; 
					}
					if (r_n.length() <= 12 && r_n.length () >= 20) {
						cerr << "ERROR: The registration number you entered is invalid \n";
					}
					
					name = n;
					age = ag;
					email = e;
					reg_num = r_n;
					programme = pr;
					phone_number = p_num;
					enroll_status = enrolled;
					activeness = active;
					
					cout << "SUCCESS: The details of this student have been successfully \n";
				}
				
				void dispplay_details () {
					
					
					cout << "Name             => " << name << endl;
					cout << "Email            => " << email << endl;
					cout << "Phone number     => " << reg_num << endl;
					cout << ""
				}
			
			
		};
		
		
		
			int main () {
				
				string name, email, programme, reg_number;
				char enrolled, active;
				bool enroll, act;
				int age, phone_number;
				
				cout << "Enter student name: ";
					getline (cin, name);
				cout << "What is his/her age?: ";
					cin >> age;
					cin.ignore();
				cout << "Enter email address of the student: ";
					getline (cin, email);
				cout << "Which programme is he/she studying?: ";
					getline (cin, programme);
				cout << "What's the regisration number?: ";
					getline (cin, reg_number);
				cout << "Enter phone number of the student: ";
					cin >> phone_number;
					cin.ignore();
				cout << "Is he/she enrolled (Y/N)?: ";
					cin >> enrolled;
						if (enrolled == 'Y' || enrolled == 'y') {
							enroll = true;
						}
						else {
							enroll = false;
						}
						
				cout << "Is he/she active (Y/N)?: ";
					cin >> active;
						if (active == 'Y' || active == 'y') {
							act = true;
						}
						else {
							act = false;
						}
						
				Student Student.Student(name, age,email, registration_number, programme, phone_number, enroll, act);
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				system ("pause>0");
					return 0;
			}