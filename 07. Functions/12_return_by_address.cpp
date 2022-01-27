//C++ Program to demonstrate return by address
#include<iostream>
using namespace std;

int * func(int size){
	int *p = new int[size];
	for(int i=0;i<size;i++){
		p[i] = i+1;
	}
	return p;
}

//main function
int main(){
	int size = 5;
	int *ptr = func(size);
	for(int i=0;i<size;i++){
		cout << ptr[i] << " ";
	}
	return 0;
}
