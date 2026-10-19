#include <iostream>
#include <string>
#include <iomanip>    // for std::fixed, std::setprecision
using namespace std;

// ---------- Forward declaration of displayVolume (needed for friend) ----------
class Box;   // forward declaration

// ---------- Base class Box ----------
class Box
{
	private:
		double length;
		double width;
		double height;

	public:
		// Constructor to set dimensions
		Box(double l, double w, double h) : length(l), width(w), height(h) {}

		// Friend function declaration
		// This function can access private members of Box
		friend void displayVolume(const Box& b);
};

// ---------- Derived class ColorBox ----------
class ColorBox : public Box
{
	private:
		string color;

	public:
		// Constructor: pass dimensions to Box constructor, set color
		ColorBox(double l, double w, double h, string c)
			: Box(l, w, h), color(c) {}

		// No need to redeclare friend – it's not inherited
		// But displayVolume can still access Box's private members
		// through the base class part of ColorBox
};

// ---------- Friend function definition ----------
void displayVolume(const Box& b)
{
	// Access private members directly because this function is a friend of Box
	double volume = b.length * b.width * b.height;

	// Print with 2 decimal places
	cout << fixed << setprecision(2);
	cout << "Volume: " << volume << endl;
}

// ---------- main() ----------
int main(){
	
	double len, wid, hei;
	string col;
	cout << "Enter length, width and heigth respectively: ";
		cin >> len >> wid >> hei;
	cin.ignore();	
	
	Box box1(len, wid, hei);
	
	cout << "Box object:     ";
	displayVolume(box1);
	
	
	cout << "Enter length, width and heigth again respectively: ";
		cin >> len >> wid >> hei;
	cin.ignore();
	
	cout << "Enter color: ";
		getline (cin, col);
	// Create a Box object
	ColorBox box2(len, wid, hei, col);

	// Create a ColorBox object
	

	// Call displayVolume for both objects
	

	cout << "ColorBox object:";
	displayVolume(box2);

	return 0;
}