//C++ Program to demonstrate constructors of a class

#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
		//As length and breadth is private it cannot be accessed outside this class
	
	
	public:
		//CONSTRUCTORS
		//Non-Parameterized Constructor
		Rectangle(){
			length = 1;
			breadth =1;
		}
		
		//Parameterized Constructor
		Rectangle(int l, int b){
			setLength(l);
			setBreadth(b);
		}
		
		//Copy Constructor
		Rectangle(Rectangle(&rect)){
			length = rect.length;
			breadth = rect.breadth;
		}
		//Public functions to set length and breadth
		void setLength(int l){
			if(l>0){
				length = l;
			}else{
				cout << "Length cannot be negative. Length is set to 0" << endl;
				length = 0;
			}
		}
		
		void setBreadth(int b){
			if(b>0){
				breadth = b;
			}else{
				cout << "Breadth cannot be negative. Breadth is set to 0" << endl;
				breadth = 0;
			}
		}
		
		//Public functions to get length and breadth
		int getLength(){
			return length;
		}		
		int getBreadth(){
			return breadth;
		}
		
		//functions to calculate area and perimeter
		int area(){
			return length*breadth;
		}
		int perimeter(){
			return 2*(length+breadth);
		}
};

//main Function
int main(){
	//Creating rectangle with default constructor
	Rectangle r1;
	cout << "Rectangle Created with Default Constructor: " << endl;
	cout << "Area = " << r1.area() << endl;
	cout << "Perimeter = " << r1.perimeter() << endl;
	
	//Creating rectangle with Parameterized constructor
	Rectangle r2(20,10);
	cout << "Rectangle Created with Parameterized Constructor: " << endl;
	cout << "Area = " << r2.area() << endl;
	cout << "Perimeter = " << r2.perimeter() << endl;
	
	//Creating rectangle with Copy constructor
	Rectangle r3(r2);
	cout << "Rectangle Created with copy Constructor: " << endl;
	cout << "Area = " << r3.area() << endl;
	cout << "Perimeter = " << r3.perimeter() << endl;
	
	return 0;
}
