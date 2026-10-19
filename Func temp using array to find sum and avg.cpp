
#include <iostream>
using namespace std;

	template <class Temp>
	
	void get_avg (Temp array [], int size) {
		
		Temp sum = 0;
		Temp avg = 0;
		
			for (int i = 0; i < size; i++ ) {
				sum += array [i];
			}
			
		avg  = sum / (double) size;
		
		cout << "Sum of the numbers => " << sum << endl;
		cout << "Average of the numbers => " << avg << endl;
		
	}
	
	int main () {
		
		int SIZE = 5;
		int array [SIZE] = {10, 20, 30, 40, 50};
		
		//cout << "Average of integers => " << get_avg (array, SIZE);
		get_avg (array, SIZE);
		cout << endl;
		
		
		float arr [SIZE] =  {23.76, 67.6578, 35.54, 896.387, 456.233};
		get_avg (arr, SIZE);
		
		
		return 0;
	}