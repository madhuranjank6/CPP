//C++ Program to write all methods of a class using scope resolution operator

#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
		
	public:
		//Writing the prototypes here only
		//Prototypes for constructors
		Rectangle(); //Non-Parameterized constructors
		Rectangle(int l, int b); //Parameterized Constructors
		Rectangle(Rectangle &rect); //copy constructors
		
		//Prototypes for accessors or getter function
		int getLength();
		int getBreadth();
		
		//Prototypes for mutators or setter functions
		void setLength(int l);
		void setBreadth(int b);
		
		//Prototypes for operational functions
		int area();
		int perimeter();
};


int main(){
	Rectangle r1;
	Rectangle r2(10,5);
	Rectangle r3(r2);
	
	//Setting the length and breadth of Rectangle r1
	r1.setLength(15);
	r1.setBreadth(10);
	
	//Printing the area and perimeter of Rectangle R1
	cout << "For Rectange r1\nArea = " << r1.area() << endl;
	cout << "Perimeter = " << r1.perimeter() << endl;
	
	//Getting the length and breadth of Rectangle r2
	cout << "For Rectangle r2\nLength = " << r2.getLength() << endl;
	cout << "Breadth = " << r2.getBreadth() << endl;
	cout << "Area = " << r2.area() << endl;
	cout << "Perimeter = " << r2.perimeter() << endl;
	
	//Getting the length and breadth of Rectangle r3
	cout << "For Rectangle r3\nLength = " << r3.getLength() << endl;
	cout << "Breadth = " << r3.getBreadth() << endl;
	cout << "Area = " << r3.area() << endl;
	cout << "Perimeter = " << r3.perimeter() << endl;
}

//Defining all the functions of the class using scope resolution operator
//Defining Constructors
Rectangle::Rectangle(){
	length = 1;
	breadth =1;
}

Rectangle::Rectangle(int l,int b){
	length = l;
	breadth = b;
}

Rectangle::Rectangle(Rectangle &rect){
	length = rect.length;
	breadth = rect.breadth;
}

//Defining getter and setter functions
int Rectangle::getLength(){
	return length;
}

int Rectangle::getBreadth(){
	return breadth;
}

void Rectangle::setLength(int l){
	length = l;
}

void Rectangle::setBreadth(int b){
	breadth =b;
}

//Defining Operational functions
int Rectangle::area(){
	return length*breadth;
}

int Rectangle::perimeter(){
	return 2*(length+breadth);
}
