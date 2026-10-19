#include <iostream>
#include <string>

	using namespace std;
	
		class Student {
			private:
				string fullname;
				string program;
				string ID_number;
				int age;
			public:	
				void display_student_details();
				void set_student_details (string f_name, string pg, string id, int a);
		};
	//	class Sub_student{
	//		public:
				void Student::set_student_details (string f_name, string pg, string id, int a){
					this->fullname = f_name;
					this->program = pg;
					this->ID_number = id;
					
						
						this->age = a;
					
					
			}
				
				void Student::display_student_details () {
					cout << "name => " << fullname << endl;
					cout << "progran => " << program << endl;
					cout << "ID number => " << ID_number << endl;
					cout << "Age   =>  " << age << endl;
				}
//};
		
		
		int main () {
			
			
			string sn, pro, id;
			int age;
			bool controller = true;
			char decision;
			do  {
				
				
			cout << "Enter name: ";
				getline (cin, sn);
			cout << "Enter program of study: ";
				getline (cin, pro);
			cout << "Enter ID number: ";
				getline (cin, id);
			
				do {
					cout << "Enter age of the student: ";
					cin >> age;
					cin.ignore();
					
					if (age <=0 ){
							cerr << "ERROR: Enter a positive age \n";	
						}
				}
		while (age <= 0);
		Student std1;
		std1.set_student_details (sn, pro, id, age);
		
		cout << endl;
		
		std1.display_student_details ();
		
		cout << "Do you want to continue? (Y/N): ";
			cin >> decision;
			cin.ignore();
				if (decision == 'n' || decision == 'N'){
					controller = false;
				}
		
		
			}
			while (controller);
			
			
			
			system ("pause>0");
				return 0;
		}