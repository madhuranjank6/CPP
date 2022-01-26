// C++ program to check if the person is eligible for offer or not

/*
A person is eligible for offer if his age if less than 12 or if his age is greater than 50
*/

#include<iostream>
using namespace std;

int main(){
	int age;
	cout << "Enter your age: "<<endl;
	cin >> age;
	if(age<12 || age>50){
		cout << "Eligible for Offer" << endl;
	}else{
		cout << "Not Eligible for Offer" << endl;
	}
	return 0;
}
