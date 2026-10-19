// the following program will examine the types of inheritance in c++ 

#include <iostream>
#include <string>

	using namespace std;
	
		// the following definition will define a class which will not inherit from any class
		// therefore it will be a base class
		
		class Student {
			private:
				string name;
				string id;
				string gender;
				string status;
				bool enrolled;
				float grades [6];
				
				float sum () const{
					float summation = 0.0;
					for (int i = 0; i < 6; i++) {
						summation += grades [i];
					}
					return summation;
				}
				
			public:
				
				Student (string& name, string& id, string& gender, bool enrolled, float array [], const int array_size) {
				
					this->name = name;
					this->id = id;
					this->gender = gender;
					this->enrolled = enrolled;
						if (enrolled == true) {
							this->status = "ENROLLED";
						}
						else {
							this->status = "NOT ENROLLED";
						}
					for (int i = 0; i < array_size; i++) {
						this->grades [i] = array [i];
					}
				}
				
				float get_sum () const {
					return sum ();
				}
				
				
				
				void display_student () const {
					cout << "Student name    : " << this->name << endl;
					cout << "Student id      : " << this->id << endl;
					cout << "Student gender  : " << this->gender << endl;
					cout << "Student status  : " << this->status << endl;
					cout << "Grades          : ";
						for (int i = 0; i < 6; i++) {
							cout << this->grades [i] << " ";
						}
					cout << endl;
					float result = sum ();
					cout << "Total marks     : " << result << endl;
				}
				
				~Student () {
					cout << "Destructor for " << this->name << " was called..." << endl;
				}
				
		};
		
		// here i will declare another base class named attendance which will mimic how a student was attending to classes 
		class Attendance {
			private:
				int number_of_days;
				
			public:
				Attendance () {
					this->number_of_days = 0;
				}
				
 				Attendance (int days) {
					if (days <= 0 ) {
						cerr << "Days must be a positive number " << endl;
					}
					else {
						this->number_of_days = days;
					}
				}
				
				void display_attendance () {
					cout << "Student was present in class for : " << this->number_of_days << " days " << endl;
				}
				
				~Attendance () {
					cout << "Desctructor for attendance class was called..." << endl;
				}
		};
		
		// this is a child class derived from the base class Student it contains all the data members and meber functions od the base class 
		class Avg_grade : public Student {
			private:
				float average;
				
				float calculate_avg () {
					//float avg = 0.0;
					this->average = get_sum () / 6.0;
					return this->average;
				}
				
			public:
				
				/*	
				Avg_grade () {
					this->average = 0.0;
				}
				*/
				Avg_grade (string name, string id, string gender, bool enrolled, float array [], const int array_size) :
					      Student (name, id, gender, enrolled, array, array_size) {
					      	
						  }
						  
							  
				void display_grades ()  {
					cout << "---------------------------------------------------------------------\n";
					cout << "                 SINGLE INHERITANCE STUDENT DETAILS                  \n";
					cout << "---------------------------------------------------------------------\n";
					display_student ();
					display_grades ();
					//display_grade ();
					float avrg = calculate_avg ();
					cout << "Average score   : " << avrg << endl;
				
				}
				
				~Avg_grade () {
					cout << "Destructor for Avg_grades class was called " << endl;
				}
		};
		
		// the following class will show how multiple inheritance in c++ is implemented 
		class Participation : public Student, public Attendance {
			private:
				string gift_for_best_attendant;
				string word_of_encouragement;
				
			public:
				
				Participation (string name, string id, string gender, bool enrolled, float array [], const int array_size,
				               int days, string best, string word) : 
				               Student (name, id, gender, enrolled, array, array_size), Attendance (days), gift_for_best_attendant (best),
				               word_of_encouragement (word) {
				               	
							   }
							   
				void display_participation () {
					cout << "---------------------------------------------------------------------\n";
					cout << "               MULTIPLE INHERITANCE STUDENT DETAILS                  \n";
					cout << "---------------------------------------------------------------------\n";
					display_student ();
					display_attendance ();
					//display_grade ();
					cout << "Gift for the best attendant     : " << this->gift_for_best_attendant << endl;
					cout << "Word of encourage to everyone   : " << this->word_of_encouragement << endl;
				}
				
				~Participation () {
					cout << "Destructor called for the participation class called " << endl;
				}
		};
		
		
		
		
		
			int main () {
				
			float array [] = {83, 60, 58, 50, 73, 63};
			
			// this is object instatiation of a single inheritnace	
				Avg_grade avg = Avg_grade ("pemphero chisale",
				                           "BCS/25/SS/004",
										   "Male",
										   true,
										   array,
										   6);
				avg.display_grades();
				cout << endl;
				
			// the following object instatiotion will invoke the class with multiple inheritance 
		/*	Participation participation = Participation ("Flora Goodson",
			                                             "BSE/25/SS/006",
														 "Female",
														 true,
														 array,
														 6,
														 10,
														 "You deserve to drink milk on my bill ",
														 "Excellent piece of work, Keep it up!!!!!");
			participation.display_participation();   */
			cout << endl << endl;
				
				
				
				
				return 0;
			}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		