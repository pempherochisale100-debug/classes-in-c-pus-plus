#include <iostream>
#include <string>
#include <cctype>

	using namespace std;
	
	template <typename Temp>
	
	bool is_equal (Temp a, Temp b) {
		return  (a == b);
	}
	
	template <>
	bool is_equal <char> (char a, char b) {
		return  (tolower (a) == tolower (b));
	}
	
		int main () {
		
		int num1 = 10, num2 = 20;
		cout << "Testing with " << num1 << " and " << num2; 
		cout << " => " << (is_equal (num1, num2) ? "true" : "false") << endl;
		
		cout << endl; 
		
		num1 = 10;
		num2 = 10;
		cout << "Testing with " << num1 << " and " << num2; 
		cout << " => " << (is_equal (num1, num2) ? "true" : "false") << endl;
		
		cout << endl;
		
		float number1 = 1.12, number2 = 2.22;
		cout << "Testing with " << number1 << " and " << number2; 
		cout << " => " << (is_equal (number1, number2) ? "true" : "false") << endl;
		
		cout << endl;
		number1 = 10.10;
		number2 = 10.10;
		cout << "Testing with " << number1 << " and " << number2; 
		cout << " => " << (is_equal (number1, number2) ? "true" : "false") << endl;	
		
		cout << endl;
		
		char g1 = 'A', g2 = 'b';
		cout << "Testing with " << g1 << " and " << g2; 
		cout << " => " << (is_equal (g1, g2) ? "true" : "false") << endl;
		
		cout << endl;
		
		g1 = 'a', g2 = 'A';
		cout << "Testing with " << g1 << " and " << g2; 
		cout << " => " << (is_equal (g1, g2) ? "true" : "false") << endl;
		
		cout << endl;
		
		g1 = 'X', g2 = 'X';
		cout << "Testing with " << g1 << " and " << g2; 
		cout << " => " << (is_equal (g1, g2) ? "true" : "false") << endl;
			
			
			
			
			system ( "pause > 0" );
				return 0;
		}