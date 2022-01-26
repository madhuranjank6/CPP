//C++ Program to print the below pattern
/*
   *
  **
 ***
****

*/

#include<iostream>
using namespace std;

int main(){
	//Here,No. of Rows = 4, No. of spaces = no. of rows-row number, No. of columns = row number
	for(int row=1;row<=4;row++){
		for(int spaces=1;spaces<=(4-row);spaces++){
			cout << " ";
		}
		for(int column=1;column<=row;column++){
			cout <<"*";
		}
		cout << endl;
	}
	return 0;
}
