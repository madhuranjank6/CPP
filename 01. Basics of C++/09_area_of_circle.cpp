// C++ program to calculate the area of circle

#include<iostream>
using namespace std;

int main(){
	float radius,area;
	cout << "Enter the radius of the circle : "<<endl;
	cin >> radius;
	area = 3.14*radius*radius;
	cout << "The are of the circle is = " << area << endl;
	return 0;
}
