//C++ program to calculate the volume of Cylinder

#include<iostream>
using namespace std;

int main(){
	float radius,height,volume;
	cout << "Enter the radius: " << endl;
	cin >> radius;
	cout << "Enter the height: "<<endl;
	cin >> height;
	volume = 3.14*(radius*radius)*height;
	cout << "Volume of Cylinder is = " << volume;
	return 0;
}
