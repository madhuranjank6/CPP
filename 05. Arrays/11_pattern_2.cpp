//C++ Program to print the below Pattern
/*

*
* *
* * *
* * * *

*/

#include<iostream>
using namespace std;

int main(){
	//In this pattern, no. of rows = 4 & No. of columns = row Number
	for(int row=1;row<=4;row++){
		for(int column=1;column<=row;column++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
