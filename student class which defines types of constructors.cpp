// the following program will examine the constructor in c++

#include <iostream>
#include <string>

	using namespace std;
	
		class Student {
			private:
				string name;
				int age;
				float grade;
			public:
				
				// the following definition is of a public default constructor with no parameters
				Student () {
					name = "pemphero chisale";
					age = 21;
					grade = 60;
				}
				// the following is the default parameterized constructor
				Student (string n, int a, float g) {
					name = n;
					age = a;
					grade = g;
				}
				
				// the following definition is a public copy constructor
				Student (const Student& student) {
					name = student.name;
					age = student.age;
					grade = student.grade;
				}
				
				// this function will help to display details of actions performed in this class
				void display () {
					cout << "name: " << name << endl;
					cout << "age : " << age << endl;
					cout << "grade: " << grade << endl;
				}
				
				// a destructor is a special member function which takes no arguments and is automatically called when 
				// an object of that type goes of scope automatically
				// declared using a tilde smbol followed by the class name ~Class_name () {}
				~Student () {
					cout << "Destructor called for " << name << endl;
				}
		};
		
			int main () {
				
			// the follwoing object instatiation will invoke the default constructor which takes no arguments
			Student student1;
			student1.display();
			cout << endl;
			
			// the following object instatiation will invoke the parameterised default constructor
			Student student2 ("pemphero chisale", 23, 58);
			student2.display();
			cout << endl;
			
			// the following object instatiation will invoke the copy constructor
			Student student3 = student2;
			student3.display();
			cout << endl;
				
			// at the end  of the main function execution the destructor will be called automatically for 
			// every that was created
			// student1.~Student ();	
			// student2.~Student ();
			// student2.~Student ();
				
				
				
				return 0;
			}