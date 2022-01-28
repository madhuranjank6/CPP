//C++ program to create a class for rectange and use it in main function
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
	//Creating the object of Rectangle class
	Rectangle r1,r2;
	
	//accessing the length and breadth variable using dot operator
	r1.length = 5;
	r1.breadth = 6;
	
	//accessing methods using dot operatore
	cout << "Area of Rectange 1 = " << r1.area() << endl;
	cout << "Perimeter of Rectangle 1 = " << r1.perimeter() << endl;
	
	//for r2
	r2.length = 10;
	r2.breadth = 15;
	cout << "Area of Rectange 2 = "<< r2.area() << endl;
	cout << "Perimeter of Rectangle2 = " << r2.perimeter() << endl;
	return 0;
}
