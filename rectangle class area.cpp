#include <iostream>

	using namespace std;
	
	class Rectangle {
		
		private:
			double width;
			double length;
			double area;
		
		public: 
			
			void set_dimensions (double w, double l) {
				
				if (w <=0 && l <= 0 ) {
					cerr << "ERROR: The width and length cannot be less than or equal to 0 \n";
				}
				else {
					width = w;
					length = l;
					cout << "Data has been set successfully\n";
				}
			}
			
			double calculate_area () const {
				
				return length * width;
				
			}
			
			void display () {
				cout << "#################################" << endl;
				cout << "#######RECTANGLE DETAILS#########" << endl;
				cout << "#################################" << endl;
				cout << "The length => " << length << endl;
				cout << "The width  => " << width << endl;
				cout << "Area       => " << calculate_area () << endl; 
			}
	};
	
		int main () {
			
			Rectangle rectangle;
			
			double length, width;
			cout << "Enter length: ";
				cin >> length;
			cout << "Enter width: ";
				cin >> width;
			
			rectangle.set_dimensions(width, length);
			rectangle.display();
			//cout << "The entries are as follows: " << rectangle.display() << endl;
			
			
			
			system ("pause>0");
				return 0;
		}