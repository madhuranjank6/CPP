// C++ Program to display the day name of week if day no. is input from keyboard using if-else if ladder

#include<iostream>
using namespace std;

int main(){
	int day;
	cout << "Enter the day number of the week: " << endl;
	cin >> day;
	if(day==1){
		cout << "Sunaday" << endl;
	}
	else if(day==2){
		cout << "Monday" << endl;
	}
	else if(day==3){
		cout << "Tuesday" << endl;
	}
	else if(day==4){
		cout << "Wednesday" << endl;
	}
	else if(day==5){
		cout << "Thursady" << endl;
	}
	else if(day==6){
		cout << "Friday" << endl;
	}
	else if(day==7){
		cout << "Saturday" << endl;
	}
	else{
		cout << "Invalid day Number" << endl;
	}
	return 0;
}
