//C++ program to write overloaded function to find minimum of two numbers

#include<iostream>
using namespace std;

//function to find minimum of two numbers
int minimum(int x, int y){
	if(x<y){
		return x;
	}else{
		return y;
	}
}

float minimum(float x, float y){
	if(x<y){
		return x;
	}else{
		return y;
	}
}

//main function
int main(){
	int a,b;
	float c,d;
	cout << "Enter two integer values to find minimum among them: "<< endl;
	cin >> a >> b;
	cout << "Enter two float values to find minimum among them: " << endl;
	cin >> c >> d;
	
	cout << "Minimum among two integer values = " << minimum(a,b) << endl;
	cout << "Minimum among two float values = " << minimum(c,d) << endl;
	return 0;
}
