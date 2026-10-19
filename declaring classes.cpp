#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <cstring>

using namespace std;

	class Grade_book {
		public:
			string name;
		
		void show_welcome_message (string name) {
			cout << "Welcome " << name << " to the student gradebook \n";
		}
		
		void display_course (string courses[], int size) {
			
			cout << "MODULE CODE \t MODULE NAME \n";
			for (int i = 0; i < size; i++) {
				cout << i + 1 << " \t\t " << courses [i] << "\n";
			}
		}
	};
	

	int main () {
		
		Grade_book grade_book;

		string student_name;
		const int SIZE = 6;
		string courses_array [SIZE];
				
		cout << "What is your name?: ";
			getline (cin, student_name);
		
		grade_book.show_welcome_message(student_name);
		
		char terminator;
		do {
				
				
			for (int i = 0; i < SIZE; i++) {
				cout << "Enter course #" << i+1 << ": ";
					getline (cin, courses_array [i]);
			}
			
			Grade_book my_courses;
			my_courses.display_course(courses_array, SIZE);
			
			cout << "Do you want to proceed,(Y/N)?: ";
				cin >> terminator;
					if (terminator == ' ') {
						cout << "Do you want to proceed,(Y/N)?: ";
						cin >> terminator;
					}
		}while (terminator == 'y' || terminator == 'Y');
		
		
		
		
		
		
		
		
		
		
		system ("pause>0");
			return 0;
	}