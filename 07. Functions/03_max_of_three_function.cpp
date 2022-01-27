//C++ program to find the maximum of three numbers using function

#include<iostream>
using namespace std;

//function to find maximum of three numbers
int maximum(int x, int y, int z){
	int res;
	if(x>y && x>z){
		res = x;
	}
	else{
		if(y>z){
			res = y;
		}else{
			res = z;
		}
	}
	return res;
}

//main function
int main(){
	int a,b,c,d;
	cout << "Enter three numbers to find the maximum among them: " << endl;
	cin >> a >> b >> c;
	d = maximum(a,b,c);
	cout << "The maximum among above numbers is " << d << endl;
	return 0;
}
