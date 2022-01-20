// C++ program to demonstrate Bitwise Opertors

/*
Bitwise Operators:
& <- Bitwise And
| <- Bitwise Or
^ <- Bitwise Xor
~ <- Bitwise Not
>> <- Bitwise Right shift
<< <- Bitwise Left Shift
*/

#include<iostream>
using namespace std;

int main(){
	int x = 10, y = 7;
	cout << "Initial value x = "<<x<<" y = "<<y<<endl;
	cout << "x & y = "<< (x&y) <<endl;
	cout << "x | y = "<< (x|y) << endl;
	cout << "x ^ y = "<< (x^y) << endl;
	cout << "~x = " << (~x) << endl;
	cout << "x >> 1 = " << (x>>1) << endl;
	cout << "x << 1 = " << (x<<1) << endl; 
	return 0;
}
