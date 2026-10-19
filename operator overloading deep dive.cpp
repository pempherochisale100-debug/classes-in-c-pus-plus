
#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		int main () {
		
			string word_1 = "Happy ";
			string word_2 = "Birthday";
			string word_3;	
			
			// first thing i will check how relational operators work with the strings 
			cout << "Comparing word_1 = " << word_1 << " and word_2 = " << word_2 << "\t \n";
			
cout << "Displaying the results of comparing " << word_1 << " and " << word_2 << " \n";

// using the == equality operator 
cout << word_1 << " == " << word_2 << ", => comparison results  = " << boolalpha << (word_1 == word_2) << endl;

// using the != operator to check the releation between strings
cout << word_1 << " != " << word_2 << ", => comparison results  = " << boolalpha << (word_1 != word_2) << endl;

// using the greater than symbol > 
cout << boolalpha << word_1 << " > " << word_2 << ", => comparison results  = " << (word_1 > word_2) << endl; 			
			
// using the less than symbol < 
cout << boolalpha << word_1 << " < " << word_2 << ", => comparison results  = " << (word_1 < word_2) << endl;

// using the greater than or equal to symbol 
cout << boolalpha << word_1 << " >= " << word_2 << ", => comparison results  = " << (word_1 >= word_2) << endl;

// using the <= operator on strings 
cout << boolalpha << word_1 << " <= " << word_2 << ", => comparison results  = " << (word_1 <= word_2) << endl;

cout << endl << endl;

cout << "testing the .empty() on string \"" << word_3 << "\" \n";
	if (word_3.empty ()) {
		cout << "Word_3 has no content, assigning word_1 \"" << word_1 << "\" to string \"" << word_3 << "\"...\n";
		word_3 = word_1;
		cout << "Now word_3 \"" << word_3 << "\" has => " << word_3 << endl; 
	}
	
cout << endl << endl;
cout << "Testing the overloaded string concantenation operator (+=) \n";
word_1 += word_2;
cout << "Concantenated string of \"" << "Happy" << "\" and \"" << word_2 << "\" ==> " << word_1 << endl;

cout << endl << endl;

// testing string concantenation with C-strings 
cout << "We will now test overloading with C-string \n";
word_1 += " to you !!!!!!";
cout << "HappyBirthday + to you => " << word_1 << endl << endl;

// testing string concantenation with a c++ 14 string literal
cout << "We will in this section now deal with string literal concantenation denoted by the s at the end of the literal";
word_1 += ", Have a great day!!!!!"s;
cout << "\n Combined result => " << word_1 << endl << endl;

// testing string with substr method 
cout << "Finding the substr () fro the first index to the 14th index in the string literal contained in \"" << word_1 << "\" \n";
cout << "Sub-string => "<< word_1.substr (0, 14) << endl << endl;

cout << "Finding sub-string from the given index to the end of the string \n";
cout << "Sub-string  => " << word_1.substr (15) << endl << endl;


// we will now try to set a character at an index which is out of range using .at () method 

try {
	cout << "Inserting \"d\" at the index of 100 \n";
	word_1.at(100) = 'd';
	cout << "Inserted \"d\" at the index of 100 => " << word_1 << endl;
}
catch (out_of_range& ex) {
	cout << "ERROR: An exception occured: " << ex.what () << endl; 
}




			
			
			system ("pause>0");
				return 0;
		}