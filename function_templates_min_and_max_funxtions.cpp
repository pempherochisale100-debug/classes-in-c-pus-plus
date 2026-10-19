#include <iostream>
#include <string>

	using namespace std;
	
	template <typename Temp>
	
	Temp find_max (Temp &p1, Temp &p2) {
		return (p1 > p2) ? p1 : p2;
		
	}
	
	template <class T>
	
	T find_min (T &n1, T &n2) {
		return (n1 < n2) ? n1 : n2;
	}
	
		int main () {
			
	int num1 = 10, num2 = 40;
	double num_1 = 10.14985841, num_2 = 33.33478538;
	float n1 = 	2.2, n2 = 5.32;
	string name1 = "peeee", name2 = "emmmm";
	char g1 = 'A', g2 = 'F';
	
	cout << "Initially, int_1 = " << num1 << " and int_2 = " << num2 << endl;
	cout << "max between " << num1 << " and " << num2 << " = " << find_max (num1, num2) << endl; 	
	cout << "min between " << num1 << " and " << num2 << " = " << find_min (num1, num2) << endl;		
			
	cout << endl;
	cout << "Initially, double_1 = " << num_1 << " and double_2 = " << num_2 << endl;
	cout << "max between " << num_1 << " and " << num_2 << " = " << find_max (num_1, num_2) << endl; 	
	cout << "min between " << num_1 << " and " << num_2 << " = " << find_min (num_1, num_2) << endl;
			
	cout << endl;
	cout << "Initially, float_1 = " << n1 << " and float_2 = " << n2 << endl;
	cout << "max between " << n1 << " and " << n2 << " = " << find_max (n1, n2) << endl; 	
	cout << "min between " << n1 << " and " << n2 << " = " << find_min (n1, n2) << endl;
	
	cout << endl;
	cout << "Initially, string_1 = " << name1 << " and string_2 = " << name2 << endl;
	cout << "max between " << name1 << " and " << name2 << " = " << find_max (name1, name2) << endl; 	
	cout << "min between " << name1 << " and " << name2 << " = " << find_min (name1, name2) << endl;
	
	cout << endl;
	cout << "Initially, char_1 = " << g1 << " and char_2 = " << g2 << endl;
	cout << "max between " << g1 << " and " << g2 << " = " << find_max (g1, g2) << endl; 	
	cout << "min between " << g1 << " and " << g2 << " = " << find_min (g1, g2) << endl;		
			
			
			
			
			
			system ("pause>0");
				return 0;
		}