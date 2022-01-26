//C++ Program to find the average of elements in array

#include<iostream>
using namespace std;

int main(){
	int n;
	float sum=0.0f,avg;
	cout << "Enter the size of array: " << endl;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout << "Enter the element at position "<<i<<": "<<endl;
		cin >> arr[i];
	}
	
	cout <<"Array is: ";
	for(int j=0;j<n;j++){
		cout << arr[j] <<" ";
		sum = sum+arr[j];
	}
	
	avg = sum/n;
	cout << "\nAverage of array elements is: "<<avg<<endl;
	return 0;
}
