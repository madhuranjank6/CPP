//C++ Program to demonstrate recursive function

#include<iostream>
using namespace std;

void printNumbers(int n){
	if(n>0){
		cout << n << endl;
		printNumbers(n-1);
	}
}

//main function
int main(){
	int x = 10;
	printNumbers(x);
	return 0;
}
