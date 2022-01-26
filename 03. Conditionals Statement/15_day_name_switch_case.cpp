//C++ Program to display day name when day number is input using switch case

#include<iostream>
using namespace std;

int main(){
	int day;
	cout << "Enter the day number of the week: "<<endl;
	cin >> day;
	switch(day){
		case 1:
			cout << "Sunday" << endl;
			break;
		case 2:
			cout << "Monday" << endl;
			break;
		case 3:
			cout << "Tuesday" << endl;
			break;
		case 4:
			cout << "Wednesday" << endl;
			break;
		case 5:
			cout << "Thursday" << endl;
			break;
		case 6:
			cout << "Friday" << endl;
			break;
		case 7:
			cout << "Saturday" << endl;
			break;
		default:
			cout << "Invalid Input" << endl;
	}
	return 0;
}
