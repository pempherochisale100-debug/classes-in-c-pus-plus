#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Account {
			protected:
				double balance;
				
			public:
				Account (double bl) : balance (bl) {
					
				}	
			
				double get_balance () const {
					return balance;
				}
		};
		
		class Savings_account : public Account {
			private:
				double interest_rate;
				
			public:
				
				Savings_account (double bl, double ir) : Account (bl), interest_rate (ir) {
					
				}
				
				double calculate_interest_for_savings (){
					return balance * interest_rate;
				}
		};
		
		class Current_account : public Account {
			private:
				double interest_rate2;
			
			public:
				Current_account (double bl, double it) : Account (bl), interest_rate2 (it) {
					
				}
				
				double calculate_interest_for_current (){
					return balance * interest_rate2;
				}
		};
		
			int main () {
				
				double bal, interest;
				
				do {
					cout << "Enter balance available in the savings account: ";
						cin >> bal;
						if (cin.fail() || bal < 0) {
							cin.clear();
							cerr <<  "ERROR: Balance should be a positive number \n";
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							bal = 0.0;
						}
						else {
							break;
						}
				}while (true);
				
				
				do {
					cout << "Enter interest range ranging from (0.0%-1.0%): ";
						cin >> interest;
						if (cin.fail() || interest < 0 || interest > 1) {
							cin.clear();
							cerr << "ERROR: Interest rate should be within the range \n";
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							interest = 0.0;
						}
						else {
							break;
						}
				}while (true);
				
				Savings_account savings (bal, interest);
				
				double bal2, int2;
				
				do {
					cout << "Balance for the curret account \n";
					cout << "Enter balance available in the savings account: ";
						cin >> bal2;
						if (cin.fail() || bal2 < 0) {
							cin.clear();
							cerr << "ERROR: Balance must be a positive value \n";
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							bal2 = 0.0;
						}
						else {
							break;
						}
				}while (true);
				
				do {
					cout << "Interest for the current account \n";
					cout << "Enter interest range ranging from (0.0%-1.0%): ";
						cin >> int2;
						if (cin.fail() || int2 < 0 || int2 > 1) {
							cin.clear();
							cerr << "ERROR: Interest rate should be within the range \n";
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							int2 = 0.0;
						}
						else {
							break;
						}
				}while (true);
				
				
				Current_account current (bal2, int2);
				
				
				
				// diaplaying 
				cout << endl;
				cout << "Details of the savings account:\n ";
				cout << "Account balance   => " << savings.get_balance() << endl;
				cout << "Savings interest  => " << savings.calculate_interest_for_savings() << endl;
				
				cout << endl;
				
				cout << "Details of the current account:\n ";
				cout << "Account balance    => " << current.get_balance() << endl;
				cout << "Current interests  => " << current.calculate_interest_for_current() << endl;
				
				
				
				system ("pause>0");
					return 0;
			}
		
		
		
		
		