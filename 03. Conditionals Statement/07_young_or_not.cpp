// C++ Program to check if a person is young or not on the basis of person's age

/*
If a person age is from 12 to 50, he is considered as young
*/

#include<iostream>
using namespace std;

int main(){
	int age;
	cout << "Enter the age: "<<endl;
	cin >> age;
	if(age>=12 && age<=50){
		cout << "Young" << endl;
	}else{
		cout << "Not Young" << endl;
	}
	return 0;
}
