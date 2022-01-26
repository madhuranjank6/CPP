// C++ Program to find the maximum element from the array

#include<iostream>
using namespace std;


int main(){
	int size;
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout << "Enter the element at position "<<i+1<<": ";
		cin>>arr[i];
	}
	
	int max = arr[0];
	for(int j=1;j<size;j++){
		if(arr[j]>max){
			max = arr[j];
		}
	}
	cout << "The Maximum element of the array is: "<<max<<endl;
	return 0;
}
