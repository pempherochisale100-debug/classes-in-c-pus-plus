#include <iostream>
#include <cmath>

	using namespace std;
	
	template <typename Template>
	
	Template find_absolute_value (Template arg_1) {
		return abs (arg_1);
	}
	
	int main () {
		int number1 = -10;
		
		cout << "The absolute value of " << number1 << " => " << find_absolute_value (number1) << endl;
		
		float num1 = -4.234;
		
		cout << "The absolute value of " << num1 << " => " << find_absolute_value (num1) << endl;
		
		
		
		
		system (" pause > 0");
			return 0;
	}