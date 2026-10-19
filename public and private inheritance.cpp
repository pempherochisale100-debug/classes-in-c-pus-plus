#include <iostream>
#include <string>

	using namespace std;
	
		class Base {
			public:
				int a = 20;
			private:
				int b = 30;
			protected:
				int c = 40;
		};
		
		class Derived : public Base {
			
		};
		
		int main () {
			
			Derived obj;
			cout << obj.a << endl;
			//cout << obj.b << endl; // error: int Base::b is private here
			//cout << obj.c << endl; // error: int Base::c is protected in this context
			
			
			
			return 0;
		}