//C++ Program to create Array by taking user input and displaying using for loop

#include<iostream>
using namespace std;

int main(){
	int size;
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	int A[size];
	for(int i=0;i<size;i++){
		cout << "Enter the element at Position " << i+1 << ": "<<endl;
		cin >> A[i];
	}
	
	cout << "Array is : ";
	for(int i=0;i<size;i++){
		cout << A[i] << " ";
	}
	return 0;
}
