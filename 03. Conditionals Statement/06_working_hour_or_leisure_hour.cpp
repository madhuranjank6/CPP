// C++ program to check if current hour is working hour or leisure hour

/*
total hour in day = 0 to 23 i.e, 24hrs
working hour = 9 t0 18 (Assumed)
*/

#include<iostream>
using namespace std;

int main(){
	int hour;
	cout << "Enter the current hour on the scale of 24: "<<endl;
	cin >> hour;
	if(hour>=9 && hour <= 18){
		cout << "Working Hour" << endl;
	}else{
		cout << "Leisure Hour" << endl;
	}
	return 0;
}
