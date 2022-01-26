// C++ Program to demonstrate pointers

#include<iostream>
using namespace std;

int main(){
	int x = 10;
	//Declaration of pointer
	int *p;
	//Initialization of pointer
	p = &x;
	
	cout << x << endl; //10
	cout << &x << endl; //it will print the address of memory where x is stored
	cout << p << endl; //It is same as &x
	cout << *p << endl; //It will print the value where p is pointing, i.e, value of x
	cout << &p << endl; //It will print the addess of memory where p is stored
	return 0;
}
