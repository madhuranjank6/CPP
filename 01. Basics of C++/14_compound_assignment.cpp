// C++ Program to demonstrate compound assignment

#include<iostream>
using namespace std;

int main(){
	int a = 100 , b = 2;
	cout << "Initial values of a and b: "<<a<<" "<<b<<endl;
	a += b; //same as a = a + b
	cout << "After a += b compound assignment, value of a = "<<a<<endl;
	a -= b; //same as a = a - b
	cout << "After a -= b compound assignment, value of a = "<<a<<endl;
	a *= b; //same as a = a * b
	cout << "After a *= b compound assignment, value of a = "<<a<<endl;
	a /= b; //same as a = a / b
	cout << "After a /= b compound assignment, value of a = "<<a<<endl;
	
	b += 5; // same as b = b+5
	cout << "After b += 5 compound assignment, value of b = "<<b<<endl;
	b -= 2; // same as b = b-2
	cout << "After b -= 2 compound assignment, value of b = "<<b<<endl;
	b *= 10; // same as b = b*10
	cout << "After b *= 10 compound assignment, value of b = "<<b<<endl;
	b /= 10; // same as b = b/10
	cout << "After b /= 5 compound assignment, value of b = "<<b<<endl;
	
	return 0;
}
