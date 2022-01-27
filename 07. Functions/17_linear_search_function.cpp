//C++ Program to write a function for linear search

#include<iostream>
using namespace std;

int linearSearch(int arr[],int key,int len){
	int index = -1;
	for(int i=0;i<len;i++){
		if(key == arr[i]){
			index = i;
			break;
		}
	}
	return index;
}

//main function
int main(){
	int size;
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	int A[size];
	for(int i=0;i<size;i++){
		cout << "Enter the element "<<i+1<<": ";
		cin >> A[i];
		cout << endl;
	}
	int searchElement;
	cout << "Enter the element to search: " << endl;
	cin >> searchElement;
	int index = linearSearch(A,searchElement,size);
	if(index == -1){
		cout << searchElement << " is not present in Array." << endl;
	}else{
		cout << searchElement << " is present at index " << index << endl;
	}
	return 0;
}
