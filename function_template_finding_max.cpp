
#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		template <class T>
		
		T find_max_value (T argu_1, T argue_2) {
			return (argu_1 > argue_2 ) ? argu_1 : argue_2;
		}
		
		int main () {
			
			cout << "max number (int) " << find_max_value (10, 20) << endl; 
			cout << "min number (float) " << find_max_value (10.4, 20.5) << endl;
			
			return 0;
		}