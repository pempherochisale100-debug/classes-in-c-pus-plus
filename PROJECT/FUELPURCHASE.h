

#ifndef FUELPURCHASE_H
#define FUELPURCHASE_H
	
	#include <string>
	#include <iostream>
	using namespace std;

		class Fuel {
			private:
				string type;
				int litres;
				double price;
				double total;
			public:
				Fuel (){
					type = "unknown";
					litres = 0;
					price = 0.0;
					total = 0.0;
				}
				
	
	bool set_type (string fuel_type){
					if (fuel_type.empty ()){
						this->type = "";
						return false;
					}
					else {
						this->type = fuel_type;
						return true;
					}
					//return true;
				}
				
	bool set_price (double p) {
					if (p <= 0 ) {
						this->price = 0.0;
						return false;
					}
					else {
						this->price = p;
						return true;
					}
					//return true;
				}
				
	bool set_litres (int l) {
					if (l <= 0) {
						this->litres = 0;
						return false;
					}
					else {
						this->litres = l;
						return true;
					}
					//return true;
				}	
				
	string get_type () {
					return type;
				}
	int get_litres () {
					return litres;
				}
	double get_price () {
					return price;
				}	
				
	double calculate_total () {
		this->total = get_litres () * get_price ();
		return total;
					//return get_litres () * get_price ();
				}
				
	void display_details () {
					cout << "Fuel type    => " << get_type() << endl;
					cout << "Price/litre  => " << get_price() << endl;
					cout << "Litres       => " << get_litres() << endl;
					cout << "Total price  => " << calculate_total () << endl;
				}	
				
				/*
				
				bool set_type (string fuel_type);
				bool set_price (double p);
				bool set_litres (int l);
				string get_type ();
				int get_litres ();
				double get_price ();
				
				double calculate_total ();
				void display_details ();
				*/
				
				
				~Fuel (){
					cout << "Destructor called for " << type << "\n";
				}
		};

#endif