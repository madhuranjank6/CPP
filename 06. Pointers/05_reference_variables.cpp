//C++ Program to demonstrate reference variables

#include<iostream>
using namespace std;

int main(){
	int x = 10;
	int a = x; //a is normal variable here
	int &y = x; //Reference variable
	
	cout << "Initially,\nx = "<<x<<"\na = "<<a<<"\ny = "<<y<<endl;
	cout <<"Performing a=a+15: "<<endl;
	a=a+15; //This will Modify the value of a only
	cout << "Value of x = "<<x<<"\nValue of a = "<<a<<"\nValue of y = "<<y<<endl;
	cout <<"Performing y=y+10: "<<endl;
	y=y+10; //This will Modify the value of x as well as y
	cout << "Value of x = "<<x<<"\nValue of a = "<<a<<"\nValue of y = "<<y<<endl;
	return 0;
}
