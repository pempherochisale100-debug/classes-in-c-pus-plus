#include <iostream>
#include <string>

	using namespace std;
	
		class Electric_meter {
			
			private:
				string customer_name;
				int meter_number;
				double units_used;
				const double price_per_unit = 1255.55;
				double total_amount;
				
			public:
				void set_parameters (string& name, int meter, float units) {
					if (name.empty ()){
						cerr << "ERROR: Name field must be filled \n";
					}
					else {
						this->customer_name = name;
					}
					if (meter <= 0 ) {
						cerr << "ERROR: Meter number should positive and greater than 10 \n";
					}
					else {
						this->meter_number = meter;
					}
					if (units <= 0) {
						cerr << "ERROR: We do not accept negative units \n";
					}
					else {
						this->units_used = units;
					}
				}
				
				double calculate_total_amount () {
					return this->total_amount = this->units_used * this->price_per_unit;
				}
				
				double return_total () {
					return total_amount  = calculate_total_amount ();
				}
				
				void display_customer_details (){
					cout << "########################################################\n";
					cout << "                 CUSTOMER'S ELECTRICITY BILL            \n";
					cout << "########################################################\n";
					cout << "Customer name         => " << this->customer_name << endl;
					cout << "Meter number          => " << this->meter_number << endl;
					cout << "Units used            => " << this->units_used << " units" << endl;
					cout << "Price per unit        => MWK" << this->price_per_unit << endl;
					cout << "Total amount          => MWK" << return_total () << endl;
					cout << "########################################################\n";
				}
				
		};
		
		int main () {
			
			string n;
			int mn;
			double un;
			Electric_meter meter;
			
			cout << "Enter name of the customer: ";
				getline (cin, n);
			cout << "Enter meter number: ";
				cin >> mn;
				cin.ignore();
			cout << "Enter units used: ";
				cin >> un;
				cin.ignore();
				
			meter.set_parameters(n, mn, un);
			cout << endl;
			meter.display_customer_details();
			
			
			
			
			system ("pause>0");
				return 0;
		}