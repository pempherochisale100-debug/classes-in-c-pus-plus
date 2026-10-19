
#include <iostream>

	using namespace std;
		
		template <class Temp>
		
		void display_array_elements (Temp array[], Temp size) {
			for (int i = 0; i < size; i++) {
				cout << array [i] << "\t";
			}
		}
			int main () {
			int size = 5;
			int array [size] = {1, 2, 3, 4, 5};
			
			cout << "Array elements: " << display_array_elements (array, size) << endl;
			cout << endl;
			
			float array1 [5] = {10.2, 45.64, 34.849, 23.23, 32.5344};
			cout << "Array elements: " << display_array_elements (array1, 5) << endl;
				
				
				
				
				return 0;
			}