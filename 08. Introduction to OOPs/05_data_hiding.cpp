//C++ Program to demonstrate data hiding

#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
		//As length and breadth is private it cannot be accessed outside this class
	
	//If we still want to access length and breadth then we can define public getter and setter functions
	public:
		//Public functions to sel length and breadth
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

//main function
int main(){
	Rectangle r; //creating object
	
	//We cannot acess private data members using dot operator
	// r.length = 10; //not possible as length is private member
	// r.breadth = 5; //not possible as breadth is private member
	
	//Taking Length and breadth as input from user
	int l,b;
	cout << "Enter the length of Rectangle: " << endl;
	cin >> l;
	cout << "Enter the breadth of Rectangle: " << endl;
	cin >> b;
	
	//Accessing private variables using setter function
	r.setLength(l);
	r.setBreadth(b);
	
	//Accessing private variables using getter function
	cout << "Length = " << r.getLength() << endl;
	cout << "Breadth = " << r.getBreadth() << endl;
	
	//Calculating area and perimeter
	cout << "Area = " << r.area() << endl;
	cout << "Perimeter = " << r.perimeter() << endl;
	
	return 0;
}
