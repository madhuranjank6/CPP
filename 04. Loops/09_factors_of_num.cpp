//C++ program to print the factors of a number

#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter the number to find the factors: " << endl;
	cin >> num;
	cout << "factors of " << num << " are: "<<endl;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			cout << i << " ";
		}
	}
	return 0;
}
