#include <iostream>
#include <string>

	using namespace std;
	
	
		template <class Temp, class Temp_0>
		
		class Pair {
			private:
				Temp name;
				Temp_0 age;
				
			public:
				
				Pair (Temp a, Temp_0 b) {
					set_name (a);
					set_age (b);
				}
				
				void set_name (Temp name) {
					this->name = name;
				}
				void set_age (Temp_0 age) {
					this->age = age;
				}
				
				Temp get_name () const {
					return this->name;
				}
				Temp get_age () const {
					return this->age;
				}
				
				void display () const {
					cout << "Data member 1 = " << get_name () << endl;
					cout << "Data member 2 = " << get_age () << endl;
				}
		};
		
		
		
		
		int main () {
			
		Pair<int, int> pair (10, 20);
		pair.display();
		
		cout << endl;
		
		Pair<string, string> pair_0 ("pemphero", "chisale");
		pair_0.display();
		
		cout << endl;
		
		Pair<float, float> pair_1 (12.5, 50.10);
		pair_1.display();
		
		cout << endl;
		
		Pair<float, int> pair_2 (12.3, 21);
		pair_2.display();	
			
			
			
			
			
			
			
			return 0;
		}