#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Account {
			private:
				string account_name;
				double account_balance;
				
			public:
				
				string get_name () const {
					return this->account_name;
				}
				double get_account_balance () const {
					return this->account_balance;
				}
				void set_name (string account_name) {
					if (account_name.empty ()) {
						cout << "Account name must be filled \n";
						this->account_name = "";
					}
					else {
						this->account_name = account_name;
					}
				}
				
				void set_balance (double account_balance) {
					if (account_balance <= 0.0) {
						cout << "Account balance must exceed 0 \n";
						this->account_balance = 0.0;
					}
					else {
						this->account_balance = account_balance;
					}
				}
				
				double update_balance (double deposit_amount){
					if (deposit_amount <= 0) {
						cout << "ERROR: A positive balance is required \n";
					}
					else {
						this->account_balance += deposit_amount;
					}
					return this->account_balance;
				}
				
				void set_account_details () {
					string name;
					double balance;
					do {
						cout << "Enter account name: ";
						getline (cin, name);
					}while (name.empty());
					set_name (name);
					
					do {
						cout <<"Enter deposit ammount: ";
							cin >> balance;
							if (cin.fail() || balance <= 0) {
								cin.clear();
								cerr << "ERROR: An error occured try again later \n";
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								balance = 0.0;
							}
							//cin.ignore();
							else {
								break;
							}
					}while (true);
					update_balance (balance);
						
				}
				void display_account_details () const {
					cout << "Account name   : " << get_name () << endl;
					cout << "Account balance: " << get_account_balance () << endl;
				}
		};
		
		
		
		
		
		int main () {
			
			Account account;
			account.set_account_details();
			account.display_account_details();
			
			
			system ("pause>0");
				return 0;
		}