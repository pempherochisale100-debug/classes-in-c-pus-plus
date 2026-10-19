#include <iostream>

	using namespace std;
	
		template <typename Temp>
		
		Temp add_numbers (Temp a, Temp b) {
			return a + b;
		} 
		
		
		int main () {
		
			int num1 = 10, num2 = 20;
			
			cout << "Sum of " << num1 << " and " << num2 << " => " << add_numbers (num1, num2) << endl;
			
			cout << endl;
			
			float n1 = 232.34, n2 = 732.33;
			cout << "Sum of " << n1 << " and " << n2 << " => " << add_numbers (n1, n2) << endl;
				
			
			
			
			return 0;
		}