//C++ Program to demonstrate relational Operators

#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int b = 20;
	int c = 10;
	
	cout << "a= " << a <<" b = "<<b<<" c = "<<c <<endl;
	cout << "a==b " << (a==b) << endl; //0
	cout << "a==c " << (a==c) << endl; //1
	cout << "a!=b " << (a!=b) << endl; //1
	cout << "a>b " << (a>b) << endl; //0
	cout << "b>c " << (b>c) << endl; //1
	cout << "a>=b " << (a>=b) << endl; //0
	cout << "b>=c " << (b>=c) << endl; //1
	cout << "a<=b " << (a<=b) << endl; //1
	return 0;
}
