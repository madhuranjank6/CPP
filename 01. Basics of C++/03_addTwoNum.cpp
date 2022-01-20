//C++ Program to add two numbers
/*
Algorithm:
Begin:
	print "Enter two numbers"
	read a,b
	c <- a + b
	print "Addition is ",c
*/

#include<iostream>
using namespace std;

int main(){
	int a, b; //Variable declaration
	cout << "Enter two numbers: " << endl; //endl is used to print in new line
	cin >> a >> b; //cin is used to take user input
	int c = a + b;
	cout << "Addition is = " << c << endl;
	return 0;
}
