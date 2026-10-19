
#include <iostream>

	using namespace std;
	
		template <class My_class>
		
		void find_min_max_range (My_class array [], My_class size) {
			
			My_class range;
			
			My_class initial_max = array [0];
			
			for (My_class i = 0; i < size; i++) {
				if (array [i] > initial_max) {
					initial_max = array [i];
				}
			}
			
			My_class initial_min = array [0];
			 
			 for (My_class i = 0; i < size; i++ ) {
			 	if (array [i] < initial_min) {
			 		initial_min = array [i];
				 }
			 }
			 
			 range = initial_max - initial_min;
			 
			 cout << "Maximum value in the array           => " << initial_max << endl;
			 cout << "Minimum value in the array           => " << initial_min << endl;
			 cout << "The range of the values in the array => " << range << endl;
		}
		
		
		int main () {
			
			const int ARRAY_SIZE = 10;
			
			int array [ARRAY_SIZE] =  {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
			
			find_min_max_range (array, ARRAY_SIZE);
			
			
			
			return 0;
		}