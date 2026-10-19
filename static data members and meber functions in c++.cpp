
// the following program will demonstrate the concept of static data members and meber functions in c++

#include <iostream>
#include <string>

	using namespace std;
	
		class Pemphero {
			private:
				string fullname;
				string gender;
				string email;
				int age;
				string phone_number;
				static int count_pemphero; // a static data member can be accessed by every object of the class type
			public:
				
				void set_pemphero () {
					cout << "Enter fullname: ";
						getline (cin, this->fullname);
					cout << "Enter gender  : ";
						getline (cin, this->gender);
					cout << "Enter email   : ";
						getline (cin, this->email);
					cout << "Enter contact : ";
						getline (cin, this->phone_number);
					cout << "Enter age     : ";
						cin >> this->age;
						cin.ignore();
					this->count_pemphero++;
				}
				
				// the following function will help display details of the captured pempheros
				void display_pemphero () const {
					cout << "Name      : " << this->fullname << endl;
					cout << "Gender    : " << this->gender << endl;
					cout << "Email     : " << this->email << endl;
					cout << "Contact   : " << this->phone_number << endl;
					cout << "Age       : " << this->age << endl;
 				}
				
				// the follwing defines stattic member function for displayin number of object, i.e: pempheros
				static int count_pempheros () {
					return count_pemphero;
				}
			
		};
		
		// the static dataa member has to be initialised out side the class because its memory is located aout side the class's scope
		int Pemphero::count_pemphero = 0;
		
			int main () {
				
				cout << "Initial number of Pempheros objects= " << Pemphero::count_pempheros() << endl;
				
				Pemphero chisale;
				chisale.set_pemphero();
				chisale.display_pemphero();
				cout << "Number of Pempheros after one obj   = " << Pemphero::count_pempheros() << endl;
				cout << endl;
				
				Pemphero mphande;
				mphande.set_pemphero();
				mphande.display_pemphero();
				cout << "Number of Pempheros after two objs  = " << Pemphero::count_pempheros() << endl;
				cout << endl;	
				
				
				
				return 0;
			}
		
		
		
		
