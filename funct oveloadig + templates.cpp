
#include <iostream>

	using namespace std;
	
		int calculate (int a, int b) {
			return a + b;
		}
		int calculate (int a, int b, int c) {
			return a - b - c;
		}
		
		template <class T>
		T calculate (T a, T b) {
			return a + b;
		}
		template <typename Temp>
		Temp calculate (Temp a, Temp b, Temp c) {
			return a - b - c;
		} 
		
		int main () {
			
			int a = 23, b = 43, c = 200;
			cout << "using integers: \n";
			cout << "Sum of " << a << " and " << b << " => " << calculate (a, b) << endl;
			cout << endl;
			
			cout << a << " - " << b << " - " << c << " => " << calculate (a, b, c) << endl;
			cout << endl;
			
			float num1 = 20.4332, num2 = 98.3763, num3 = 33.43423;
			cout << "using floats \n";
			cout << num1 << " + " << num2 << " => " << calculate (num1, num2) << endl;
			cout << endl;
			cout << num1 << " - " << num2 << " - " << num3 << " => " << calculate (num1, num2, num3) << endl;
 			
			
			
			return 0;
		}
		