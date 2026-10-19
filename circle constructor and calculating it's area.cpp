#include <iostream>
#include <cmath>

	using namespace std;
	
	class Circle {
		
		private:
			
			float radius;
			
		public:
			
			Circle (float radii) {
				if (radii <= 0) {
					cerr << "ERROR: Radius can't be equal to or less than 0 \n";
				}
				else {
					radius = radii;
					cout << "SUCCESS: Data has been set successfully \n";
				}
			}
			
			void display_area () {
				
				cout << 
			}
		
		
	};
	
		int main () {
			
			
		//	Circle circle;
			
			float user_radius;
			cout << "Enter radius: ";
				cin >> user_radius;
				cin.ignore();
			//circle.Circle(user_radius);
			
			Circle circle (user_radius);
			
			circle.calculate_and_display_area();
			
			
			
			
			
			
			
			system ("pause>0");
				return 0;
		}