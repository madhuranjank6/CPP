// c++ program to check if the number is perfect number or not

/*
if sum of the factors of a number is equal to twice the number, then it is called as pefect number
*/

#include<iostream>
using namespace std;

int main(){
	int num, sum = 0;
	cout << "Enter the number to check if it is perfect number or not: " << endl;
	cin >> num;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			sum = sum + i;
		}
	}
	if(sum == (2*num)){
		cout << num << " is Perfect number" << endl;
	}else{
		cout << num << " is not a Perfect Number" << endl;
	}
	return 0;
}
