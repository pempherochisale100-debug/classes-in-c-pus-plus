
#include <string>
#include <iostream>
#include "test_project.h"

using namespace std;

void Fuel::set_details (string ty, int lt, double pr){
	this->fuell = ty;
	this->price = pr;
	this->litrez = lt;
	cout << "\nSUCCESS: Data members has been set \n";
}

double Fuel::calculate_total(){
	total = price * litrez;
		return total;
}

void Fuel::display_details() {
	cout << "-----------------------------------------------\n";
	cout << "                 FUEL DETAILS                  \n";
	cout << "-----------------------------------------------\n";
	cout << "Fuel type : " << fuell << endl;
	cout << "Price/lt  : MWK" << price << endl;
	cout << "Litres bought : " << litrez << endl;
	cout << "Total amount : MWK" << Fuel::calculate_total() << endl;
	cout << "-----------------------------------------------\n";
	cout << "THANK YOU!!!!!!!!!!!\n";
	}