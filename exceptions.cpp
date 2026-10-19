#include <iostream>
#include <string>

	using namespace std;
	
		class Printer {
			private:
				string _name;
				int available_paper;
				
			public:
				Printer (string name, int paper) {
					_name  = name;
					available_paper = paper;
				}	
				
				void print (string txtDoc){
					
					int required_paper = txtDoc.length () / 10;
						if (required_paper > available_paper) {
							// throwing an exception if the condition is false
							throw 101;
						}
					cout << "Printing..." << txtDoc << endl;
					
					available_paper -= required_paper;
				}
		};
	
		int main () {
	// this program	is going to handle exceptions in c++ 
	// we will simulate the work of a printer 
			
			//Printer pr;
			
			Printer pr("hp deskjet 1234", 10);
			try {
				
			pr.print("Hello my name is pemphero. I am a pentester.");
			
			
			//Printer pr("hp deskjet 1234", 10);
			
			pr.print("Hello my name is pemphero. I am a pentester.");
			
			
			//Printer pr("hp deskjet 1234", 10);
			
			pr.print("Hello my name is pemphero. I am a pentester.");
			}
			//catching text exception 
			catch (const char * textexception){
				cout << "Exception " << textexception << endl;
			}
			// catching integer exception 
			catch (int codeexc) {
				cout << "Exception " << codeexc << endl;
			}
			
			// handling any type of exception 
			 catch (...) {
			 	cout << "Exception happened " << endl;
			 }
			
			
			
			system ("pause>0");
		}