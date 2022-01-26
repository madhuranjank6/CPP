//C++ program to demonstarte pointer arithmetic

#include<iostream>
using namespace std;

int main(){
	int A[5] = {2,4,6,8,10};
	int *p = A;
	
	cout << "Value of *p = " << *p << endl;
	p++;
	cout << "After p++, Value of *p = " << *p << endl;
	p--;
	cout << "After p--, Value of *p = " << *p << endl;
	p = p+2;
	cout << "After p=p+2, Value of *p = " << *p << endl;
	p=p-2;
	cout << "After p=p-2, Value of *p = " << *p << endl;
	return 0;
}
