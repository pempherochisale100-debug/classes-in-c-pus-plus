
#include <iostream>

	using namespace std;
	
		template <typename Template>
		
		Template find_max (Template a, Template b) {
			
			return (a > b) ? a : b;
			
		}
		
		int main () {
			
			int n1 = 10, n2 = 40;
			
			cout << "The max number between " << n1 << " and " << n2 << " => " << find_max (n1, n2 ) << endl;
			cout << endl;
			
			float num1 = 49.343, num2 = 3.343;
			cout << "The max number between " << num1 << " and " << num2 << " => " << find_max (num1, num2 ) << endl;
				
					
			
			
			return 0;
		}