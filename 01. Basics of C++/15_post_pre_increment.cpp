// C++ Program to demonstrate post and pre Increment operator

#include<iostream>
using namespace std;

int main(){
	int i = 10; 
	cout << "Initial value of i = "<<i<<endl;
	cout << "Post Increment will first do the assignment and then increase the value by 1"<<endl;
	cout << "After i++ (post Incerement), i = " << i++ << endl;
	cout << "Now, i = "<<i<<endl;
	cout << "Pre Increment will first increase the value by 1 and then do the assignment"<<endl;
	cout << "After ++i (pre Incerement), i = " << ++i << endl;
	cout << "Now, i = "<<i<<endl;
	
	return 0;
}
