//C++ Program to create objects of a class in stack and heap

#include<iostream>
using namespace std;

class Rectangle{
	public:
		int length;
		int breadth;
		
		int area(){
			return length*breadth;
		}
		
		int perimeter(){
			return 2*(length+breadth);
		}
};

//main function
int main(){
	Rectangle r; //created in stack memory
	Rectangle *p = new Rectangle ; //Created in heap memory
	
	//For stack memory Recrangle
	cout << "Enter the length of rectangle created in Stack memory: " << endl;
	cin >> r.length;
	cout << "Enter the breadth of rectangle created in Stack memory: " << endl;
	cin >> r.breadth;
	
	//For Heap Memory Rectangle
	cout << "Enter the length of rectangle created in Heap memory: " << endl;
	cin >> p -> length;
	cout << "Enter the breadth of rectangle created in Heap memory: " << endl;
	cin >> p -> breadth;
	
	cout << "For Stack Memory rectangle: " <<endl;
	cout << "Area = " << r.area() << endl;
	cout << "Perimeter = " << r.perimeter() << endl;
	
	cout << "For Heap Memory rectangle: " << endl;
	cout << "Area = " << p -> area() << endl;
	cout << "Perimeter = " << p -> perimeter() << endl;
	
	return 0;
}
