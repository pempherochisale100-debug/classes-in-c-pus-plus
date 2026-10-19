#include <iostream>
#include <string>
#include <limits>
#include <cmath>

	using namespace std;
	
		class Shape {
			
			public:
			virtual float area () = 0;
			
			virtual ~Shape () {
				cout << "\nDestructor called \n";
			}
		};
		
		class Rectangle : public Shape {
			private:
				float length;
				float width;
				
			public:
				//constructor
				Rectangle (float l, float w) : length (l), width (w) {
					
				}
				// an override to the pure virtual function
				float area () override {
					return length * width;
				}
				
				~Rectangle () {
					
				}
		};
		
		class Circle : public Shape {
			private:
				float radius;
			
			public:
				//constructor
				Circle (float r) : radius (r){
					
				}
				// an override to the pure virtual function 
				float area () override {
					return M_PI * pow(radius, 2);
				}
		};
		
		
		int main (){
			
			float len, wid, rad;
			cout << "Enter length of the rectangle: ";
				cin >> len;
				if (cin.fail() || len < 0) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cerr << "ERROR: Length must be greater than 0 \n";
					len = 0.0;
				}
				
			cout << "Enter width of the rectangle: ";
				cin >> wid;
				if (cin.fail() || wid < 0) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cerr << "ERROR: Width must be greater than 0 \n";
					wid = 0.0;
				}
			
			cout << "Enter radius of the circle: ";
				cin >> rad;
				if (cin.fail() || rad < 0) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cerr << "ERROR: Radius must be a positive value \n";
					rad = 0.0;
				}
				
				//creating pointer objects and dynamically allocating memory from the heap memory
			Shape* r = new Rectangle (len, wid); // initialing a parameterised constructor of rectangle 
			Shape* c = new Circle (rad);// initialising a parameterised constructor of circle
			
			cout << "\nArea of rectangle = " << r->area() << endl;
			cout << "\nArea of circle    = " << c->area() << endl;
			
			// here i am deleting dynamically allocated memory from the heap
			delete r;
			delete c;
			
		//	Shape shape
			
			
			system ("pause>0");
				return 0;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		