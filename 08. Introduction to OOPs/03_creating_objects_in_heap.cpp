//C++ program to create objects in heap with the help of pointers
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
	Rectangle *p;
	p = new Rectangle;  //Object is created in heap
	
	Rectangle *q = new Rectangle(); //Object is created in heap
	
	//Accessing data members
	p -> length = 5;
	p -> breadth = 6;
	
	//Accessing functions
	cout << "Area of Rectangle1 = " << p -> area() << endl;
	cout << "Perimeter of Rectangle1 = " << p -> perimeter() << endl;
	
	//For object created by q
	q -> length = 10;
	q -> breadth = 5;
	
	cout << "Area of Rectangle2 = " << q -> area() << endl;
	cout << "Perimeter of Rectangle2 = " << q -> perimeter() << endl;
	
	return 0;
}

