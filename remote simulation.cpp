#include <iostream>

	using namespace std;
	
	class Remote_controller {
		
	  public:
		string brand;
		double price;
		int current_channel;
		int volume;
		string model;
		bool power_stat = true;
		
	  public:
	  	
	  	void show_details (const string brand, const double price, const int current_channel, const int volume, const string model){
	  		
	  		cout << "Brand name 	  ===> " << brand << endl;
	  		cout << "Price     	  ===> " << price << endl;
	  		cout << "Current channel  ===> " << current_channel << endl;
	  		cout << "Volume           ===> " << volume << endl;
	  		cout << "Model            ===> " << model << endl;
	  		
		  } 
		  
		void change_channel (const int new_channel) {
			current_channel = new_channel;
				cout << "The current channel " << new_channel << endl;
		}
		
		void power (bool power_stat){
			if (power_stat) {
				cout << "The TV is ON \n";
			}
			else {
				cout << "The TV is OFF \n";
			}
		}
	};
	
		int main () {
			
			
			Remote_controller remote;
			
			cout << "Enter the name of the brand of this remote: ";
				getline (cin,remote.brand);
				
			cout << "How much are you selling it?: ";
				cin >> remote.price;
				cin.ignore();
		 	
			 cout << "Enter a landing channel: ";
			 	cin >> remote.current_channel;
				 cin.ignore();
				
			cout << "What is the default volume?: ";
				cin >> remote.volume;
				cin.ignore();
			
			cout << "What is the model of this remote?: ";
				getline (cin, remote.model);
				cin.ignore();
				
				
			
			
remote.show_details(remote.brand, remote.price, remote.current_channel, remote.volume, remote.model);

remote.power(true);
			
			
			
			
			
			
			
			
			
			
			
			
			system ("pause>0");
				return 0;
		}