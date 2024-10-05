// COMSC-210 | Lab-16 | Jeremiah Ortiz

#include <iostream>

using namespace std; 

class Color {

private:

	int red;

	int blue; 

	int green; 

public: 

	 // Constructor 
	Color() { 

		red = 0; 

		blue = 0; 

		green = 0; 
	}

	 // Parametized Constructor 
	Color(int r, int b, int g) {

		red = r; 

		blue = b; 

		green = g; 
	} 

	 // Partial Constructor 
	Color (int b) {

		blue = b; 
	}

	void setRed(int r) {

		red = r; 
	}

	void setBlue(int b) {

		blue = b; 
	}

	void setGreen(int g) {

		green = g; 
	}

	int getRed() {

		return red; 
	}

	int getBlue() {

		return blue; 
	}

	int getGreen() {
		
		return green; 
	}

	void displayColors() {

		cout << "Red: " << getRed() << endl << "Blue: " << getBlue() << endl << "Green: " << getGreen() << endl; 
	}

};

int main() {

	Color g; 

	g.displayColors(); 

	Color colors(255,35,28); 
	colors.displayColors(); 

	Color colorBlue(250); 
	colorBlue.displayColors(); 

	return 0;
}

