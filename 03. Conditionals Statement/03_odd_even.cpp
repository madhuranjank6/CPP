// C++ Program to check if the number is odd or even

#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter the number(>1) to check for odd or even: "<<endl;
	cin >> num;
	if(num%2==0){
		cout << num << " is Even Number" << endl;
	}else{
		cout << num << " is Odd Number" << endl;
	}
	return 0;
}
