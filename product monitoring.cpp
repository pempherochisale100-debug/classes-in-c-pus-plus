#include <iostream>
#include <string> 


	using namespace std;
	
		class Product {
			private:
				string product_name;
				float product_price;
				float product_tax;
				float final_price;
				
			public:
				
				void enter_product (string name,float price, float tax ) {
					if (price <= 0) {
						cerr << "ERROR: Price cannot be negative \n";
					}
					else if (tax <= 0) {
						cerr << "ERROR: Tax amount cannot be a negative number \n";
					}
					else {
						this->product_name = name;
						this->product_price = price;
						this->product_tax = tax;
						cout << "SUCCESS: Data has been successfully added \n";
					}
					
				}
				
				double tax_calc () {
					return this->final_price = product_price + product_tax;
				}
				
				void display_results () {
					cout << "##############################################\n";
					cout << "               PRODUCT DETAILS                \n";
					cout << "##############################################\n";
					
						cout << "Product name      ======> " << product_name << endl;
						cout << "Product price     ======> " << product_price << endl;
						cout << "Tax amount        ======> " << product_tax << endl;
						cout << "Final amount      ======> " << tax_calc () << endl;
						
					cout << "##############################################\n";
				}
			
			
			
		};
		
			int main () {
				
				Product product;
				
				string products;
				double initial, tax;
				cout << "###########################################\n";
				cout << "                PRODUCT MANAGEMENT          \n";
				cout << "###########################################\n";
				
				cout << "Enter product name: ";
					getline (cin, products);
				cout << "Enter product price: ";
					cin >> initial;
					cin.ignore();
				cout << "Enter tax amount: ";
					cin >> tax;
					cin.ignore();
					
				
				product.enter_product (products, initial, tax );
				cout << endl << endl;
				
				product.display_results ();
				
				
				
				system ("pause>0");
					return 0;
			}