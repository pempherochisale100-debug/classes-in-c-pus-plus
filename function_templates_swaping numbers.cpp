#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
	template <typename T>
	
	void swap_numbers (T &arg1, T &arg2) {
		T temp = arg1;
		arg1 = arg2;
		arg2 = temp;
		
		cout << "After swaping, variable = " << arg1 << endl;
		cout << "After swaping, variable = " << arg2 << endl;
	}
	
		int main () {
			
			int num1 = 10;
			int num2 = 20;
			
			cout << "Before swaping, number1 = " << num1 << endl;
			cout << "Before swaping, number2 = " << num2;
			cout << endl;
			swap_numbers (num1, num2); 
			
			cout << endl;
			
			string name1 = "pemphero";
			string name2 = "emma";
			
			cout << "Before swaping, name1 = " << name1 << endl;
			cout << "Before swaping, name2 = " << name2 << endl;
			swap_numbers (name1, name2);
			
			
			
			
			system ("pause>0");
				return 0;
		}