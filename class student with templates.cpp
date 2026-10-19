
#include <iostream>

using namespace std;

	template <typename Temp> 
	
	class Student {
		private:
			Temp fcn, pro, ssa, cal, bio;
			
		public:
			
			void set_marks () {
				cout << "Enter mark for fcn: ";
				cin >> fcn;
				//cin.ignore();
				cout << "Enter mark for pro: ";
				cin >> pro;
				//cin.ignore();
				cout << "Enter mark for ssa: ";
				cin >> ssa;
				//cin.ignore();
				cout << "Enter mark for cal: ";
				cin >> cal;
				//cin.ignore();
				cout << "Enter mark for bio: ";
				cin >> bio;
				//cin.ignore();
			}
			
			Temp get_fcn () const {
				return this->fcn;
			}
			Temp get_pro () const {
				return this->pro;
			}
			Temp get_ssa () const {
				return this->ssa;
			}
			Temp get_cal () const {
				return this->cal;
			}
			Temp get_bio () const {
				return this->bio;
			}
			
			Temp calculate_sum () {
				return (get_fcn () + get_pro () + get_ssa () + get_cal () + get_bio ());
			}
			
			Temp get_avg () {
				return (calculate_sum() / 5.0);
			}
			
			void display_result ()  {
				cout << "The average mark => " << get_avg () << endl;
			}
	};
	
	
		int main () {
			
			Student<int> student;
			student.set_marks();
			
			student.display_result();
			cout << endl;
			
			Student<float> stu;
			stu.set_marks();
			stu.display_result();
			
			
			
			return 0;
		}