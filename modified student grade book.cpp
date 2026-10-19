#include <iostream>
#include <string>

	using namespace std;
	
	
	void dc () {
		cout << "####################################################\n";
	}
	
		class Student_grade_book {
			private:
				float programming;
				float ICT;
				float networking;
				char grade;
				bool check_mark (float m){
					return (m >= 0 && m <= 100);
				}
			public:
				Student_grade_book (){
					this->programming = 0;
					this->ICT = 0;
					this->networking = 0;
				}
				
				bool set_programming_mark (float mark) {
					if (check_mark(mark)){
						this->programming = mark;
						return true;
					}
					return false;
				}
				
				bool set_ICT_mark (float mark) {
					if (check_mark (mark)){
						this->ICT = mark;
						return true;
					}
					return false;
				}	
				
				bool set_networking_mark (float mark){
					if (check_mark (mark)){
						this->networking = mark;
						return true;
					}
					return false;
				}
				
				double calculate_total () {
					return programming + ICT + networking;
				}
				
				double calculate_average () {
					return calculate_total () / 3.0;
				}
				
				char determine_grade () {
					double average = calculate_average ();
					if (average >= 0 && average < 50) {
						this->grade = 'F';
					}
					else if (average >= 50 && average < 60) {
						this->grade = 'D';
					}
					else if (average >=60 && average < 70 ){
						this->grade = 'C';
					}
					else if (average >= 70 && average < 80){
						this->grade = 'B';
					}
					else{
						this->grade = 'A';
					}
					return grade;
				}
				
				void display_details () {
					dc ();
					cout << "                 STUDENTS DETAILS					 \n";
					dc ();
					cout << "Programming: " << programming << endl;
					cout << "ICT:         " << ICT << endl;
					cout << "Networking:  " << networking << endl;
					cout << "Total marks: " << calculate_total () << endl;
					cout << "Average:     " << calculate_average () << endl;
					cout << "Grade:       " << determine_grade () << endl;
					cout << "###################################################\n";
				}
				
				
		};
		
		
		int main () {
			
			
			Student_grade_book student;
			
			float pro, ict, swr;
			
		//	do {
				//cin.ignore();
			cout << "Enter marks for programming: ";
				cin >> pro;
				cin.ignore();
				student.set_programming_mark(pro);
			cout << "Enter marks for ICT: ";
				cin >> ict;
				cin.ignore();
				student.set_ICT_mark(ict);
			cout << "Enter marks for networking: ";
				cin >> swr;
				cin.ignore();
				student.set_networking_mark(swr);
		//	}
		//	while (pro < 0 && pro > 100 && ict < 0 && ict > 100 && swr < 0 && swr > 100);
			
			cout << endl;
			
			student.display_details();
					
			
			
			
			
			
			
			system ("pause>0");
				return 0;
		}