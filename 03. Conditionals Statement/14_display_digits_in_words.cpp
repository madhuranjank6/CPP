// C++ Program to display digits in words using if-else if ladder

#include<iostream>
using namespace std;

int main(){
	int digit;
	cout << "Enter digits from 0-9 to display it in words: "<<endl;
	cin >> digit;
	if(digit==0){
		cout << "Zero" << endl;
	}
	else if(digit==1){
		cout << "One" << endl;
	}
	else if(digit==2){
		cout << "Two" << endl;
	}
	else if(digit==3){
		cout << "Three" << endl;
	}
	else if(digit==4){
		cout << "Four" << endl;
	}
	else if(digit==5){
		cout << "Five" << endl;
	}
	else if(digit==6){
		cout << "Six" << endl;
	}
	else if(digit==7){
		cout << "Seven" << endl;
	}
	else if(digit==8){
		cout << "Eight" << endl;
	}
	else if(digit==9){
		cout << "Nine" << endl;
	}
	else{
		cout << "Inavlid Input" << endl;
	}
	return 0;
}
