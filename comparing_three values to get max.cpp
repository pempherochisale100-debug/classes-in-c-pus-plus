#include <iostream>
#include <string>

	using namespace std;
	
		template <typename Temp>
		
		Temp compare_three_values (Temp a, Temp b, Temp c) {
			Temp temp = a;
			if (b > temp) {
				temp = b;
			}
			if (c > temp ) {
				temp = c;
			}
			return temp;
		}
		
		int main () {
			
			int val1 = 10, val2 = 20, val3 = 30;
			cout << "The greatest value between " << val1 << ", " << val2 << " and " << val3 ;
			cout << " => " << compare_three_values (val1, val2, val3) << endl;
			
			cout << endl;
			
			float va1 = 10.5, va2 = 10.6, va3 = 10.4;
			cout << "The greatest value between " << va1 << ", " << va2 << " and " << va3 ;
			cout << " => " << compare_three_values (va1, va2, va3) << endl;
			
			cout << endl;
			
			double v1 = 1.123456, v2 = 1.54323, v3 = 0.87632;
			cout << "The greatest value between " << v1 << ", " << v2 << " and " << v3 ;
			cout << " => " << compare_three_values (v1, v2, v3) << endl;
			
			cout << endl;
			
			string name1 = "pemphero", name2 = "chisale", name3 = "emmacrate";
			cout << "The greatest value between " << name1 << ", " << name2 << " and " << name3 ;
			cout << " => " << compare_three_values (name1, name2, name3) << endl;
			
			
			
			system ("pause > 0");
				return 0;
		}