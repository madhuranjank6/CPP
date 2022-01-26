//C++ Program to find min and max of two numbers using function pointers

#include<iostream>
using namespace std;

int max(int x,int y){
	return x>y?x:y;
}

int min(int x,int y){
	return x<y?x:y;
}

int main(){
	int (*fp)(int,int); //Declaration
	fp = max; //Initializing
	int m = fp(10,20);
	fp = min; 
	int l = fp(10,20);
	
	cout << "Minimum among 10 and 20 is = "<<l<<endl;
	cout << "Maximum among 10 and 20 is = "<<m<<endl;
	return 0;
}
