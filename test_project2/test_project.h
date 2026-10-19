

#ifndef TEST_PROJECT_H
#define TEST_PROJECT_H

	#include <string>
	using namespace std;
	
	
	class Fuel {
		
		private://these members will be set to private so odification without permission
			string fuell;
			int litrez;
			double price;
			double total;
		
		public:
			
			void set_details (string ty, int lt, double pr);
			
			double calculate_total ();
			
			void display_details ();
	};
	
	
#endif