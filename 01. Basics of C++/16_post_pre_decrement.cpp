// C++ Program to demonstrate post and pre decrement operator

#include<iostream>
using namespace std;

int main(){
	int i = 10; 
	cout << "Initial value of i = "<<i<<endl;
	cout << "Post decrement will first do the assignment and then decrease the value by 1"<<endl;
	cout << "After i-- (post decrement), i = " << i-- << endl;
	cout << "Now, i = "<<i<<endl;
	cout << "Pre decrement will first decrease the value by 1 and then do the assignment"<<endl;
	cout << "After --i (pre decrement), i = " << --i << endl;
	cout << "Now, i = "<<i<<endl;
	
	return 0;
}
