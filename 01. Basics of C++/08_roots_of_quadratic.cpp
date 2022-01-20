// C++ program to find the roots of quadratic Equation

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float a,b,c;
	float r1,r2;
	cout << "Enter the co-efficient of X^2: " << endl;
	cin >> a;
	cout << "Enter the co-efficient of x: " << endl;
	cin >> b;
	cout << "Enter the value of constant term: "<<endl;
	cin >> c;
	
	r1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
	r2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
	
	cout << "The roots are: " << r1 <<", "<<r2<<endl;
	return 0;
}
