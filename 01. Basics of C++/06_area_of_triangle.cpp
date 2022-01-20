// C++ program to calculate the Area of a Triangle

/*
ALGORITHM:
Begin
	print "Enter base and height
	read b,h
	area <- (b*h)/2
	print "Area is = ",area
*/

#include<iostream>
using namespace std;

int main(){
	float base,height;
	float area;
	cout << "Enter base and height " << endl;
	cin >> base >> height;
	area = (base*height)/2;
	cout << "Area of the Triangle is = " << area << endl;
	return 0;
}
