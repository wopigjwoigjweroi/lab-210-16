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

};

int main() {

	Color red, green, blue; 

	

	return 0;
}

