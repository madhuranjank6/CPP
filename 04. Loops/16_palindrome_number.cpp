//C++ program to check if the given number is palindrome or not

#include<iostream>
using namespace std;

int main(){
	int num,rev=0;
	cout << "Enter the number to check for Palindrome: " << endl;
	cin >> num;
	int temp = num;
	while(num>0){
		int r = num%10;
		rev = rev*10+r;
		num = num/10;
	}
	if(rev==temp){
		cout << temp << " is a Palindrome Number" << endl;
	}else{
		cout << temp << " is not a Palindrome Number" << endl;
	}
}
