//C++ Program to count the number of positive and negative elements in the array

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
	
	int p_count = 0,n_count=0;
	for(int j=0;j<size;j++){
		if(arr[j]<0){
			n_count += 1;
		}else{
			p_count += 1;
		}
	}
	cout << "No. of Positive Elements = " << p_count << endl;
	cout << "No. of Negative Elements = " << n_count << endl;
	return 0;
}
