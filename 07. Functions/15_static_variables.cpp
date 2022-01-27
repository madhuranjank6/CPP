//C++ Program to demonstrate static variables

#include<iostream>
using namespace std;

void fun(){
	static int v=0;
	int a=10;
	v++;
	cout<<a<<" "<<v<<endl;;
}

//main functiom
int main(){
	fun();
	fun();
	fun();
	return 0;
}
