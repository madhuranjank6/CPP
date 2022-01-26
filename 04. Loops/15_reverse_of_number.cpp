//C++ program to reverse a number

#include<iostream>
using namespace std;

int main(){
	int num,rev=0;
	cout << "Enter the number to calculate the reverse: " << endl;
	cin >> num;
	while(num>0){
		int r = num%10;
		rev = rev*10+r;
		num = num/10;
	}
	cout << "Reverse of the given Number is = " << rev << endl;
	return 0;
}
