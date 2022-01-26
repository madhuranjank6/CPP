//C++ Program to check if roll no is valid or not

#include<iostream>
using namespace std;

int main(){
	int roll;
	cout << "Enter Roll Number: " << endl;
	cin >> roll;
	if(roll < 1){
		cout << "ROll number not valid. Please enter valid Roll"<<endl;
	}else{
		cout << "Valid Roll Number" << endl;
	}
	return 0;
}
