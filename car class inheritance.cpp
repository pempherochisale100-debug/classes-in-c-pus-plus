#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Vehicle {
			private:
				string v_name;
				int number_of_wheels;
			
			public:
				
				Vehicle (int wheels, string name){
					this->number_of_wheels = wheels;
					this->v_name = name;
				}
				
				void display_wheels (){
					cout << v_name << " has " << number_of_wheels << " wheels \n";
				}
				
				~Vehicle (){
					cout <<"Destructor called for " << v_name << endl;
				}
		};
		
		class Car : public Vehicle {
			private:
				int number_of_seats;
				
			public:
				Car (string name, int wheels, int seats) : Vehicle (wheels, name){
					this->number_of_seats = seats;
				}
				
				void display_car (){
					display_wheels ();
					cout << "Number of seats => " << number_of_seats << endl;
				}
		};
		
		namespace galimoto {
			string name;
			int wheels;
			int seats;
		}
		
		
		
		
			int main () {
				
				cout << "Enter name of the car \n";
					getline (cin, galimoto::name);
					
				do{
					cout << "Enter number of wheels \n";
						cin >> galimoto::wheels;
							if (cin.fail() || galimoto::wheels < 0){
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								cerr << "ERROR: Number of wheels must be greater than 0 \n";
								galimoto::wheels = 0;
							}
							else {
								break;
							}
				}
				while (true);
				
				do{
					cout << "Enter number of seats \n";
						cin >> galimoto::seats;
							if (cin.fail() || galimoto::seats < 0){
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								cerr << "ERROR: Number of seats must be greater than 0 \n";
								galimoto::seats = 0;
							}
							else {
								break;
							}
				}
				while (true);
				
				Car car(galimoto::name, galimoto::wheels, galimoto::seats);
				//car.Car;
				
				//Car car;
				car.display_car();
		
				
				
				
				
				
				
				system ("pause>0");
					return 0;
			}
		
		
		
		
		
		
		
		
		