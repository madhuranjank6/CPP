//C++ program to access objects with the help of pointers
#include<iostream>
using namespace std;

class Rectangle{
	public: //if we not declare public here by default all data members and functions are private
		int length;
		int breadth;
		
		int area(){
			return length*breadth;
		}
		
		int perimeter(){
			return 2*(length+breadth);
		}
};

int main(){
	Rectangle r; //created in stack
	Rectangle *p; //pointer
	p = &r;
	
	// r.length = 10; //Accessing using variable
	// r.breadth = 15;
	
	//Accessing variables using pointers
	p -> length = 10;
	p -> breadth = 5;
	
	//Accessing functions using pointers
	cout << "Area of Rectangle = " << p -> area() << endl;
	cout << "Perimeter of Rectangle = " << p -> perimeter() << endl;
	
	return 0;
}

