//C++ Program to display the nature of roots and roots of quadratic equation

/*
Quadratic equation --> ax^2 + bx + c
Discriminant, d = b^2 - 4*a*c
if d = 0, Roots are real and equal and roots = (-b)/(2*a)
if d > 0, Roots are real and unequal and roots = (-b+sqrt(d))/(2*a) and (-b-sqrt(d))/(2*a)
if d < 0, Roots are imaginary
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float a,b,c,d,r1,r2;
	cout << "Enter the co-efficient of x^2: "<<endl;
	cin >> a;
	cout << "Enter the co-efficient of x: "<<endl;
	cin >> b;
	cout << "Enter the constant term: "<<endl;
	cin >> c;
	
	d = (b*b)-(4*a*c);
	if(d==0){
		cout << "Roots are Equal" << endl;
		r1 = (-b)/(2*a);
		cout << "1st Root = "<<r1<<"\n2nd Root = "<<r1<<endl;
	}else{
		if(d>0){
			cout << "Roots are real and Unequal" << endl;
			r1 = (-b+sqrt(d))/(2*a);
			r2 = (-b-sqrt(d))/(2*a);
			cout << "1st Root = "<<r1<<"\n2nd Root = "<<r2<<endl;
		}else{
			cout << "Roots are Imaginary" << endl;
		}
	}
	return 0;
}
