//C++ program to check for armstrong number

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int num,len=0,sum = 0;
	cout << "Enter the number to check for Armstrong number: " << endl;
	cin >> num;
	int temp = num;
	int temp2 = num;
	
	//Logic to calculate the length of the number
	while(temp>0){
		len += 1;
		temp /= 10;
	}
	
	//Logic to calculate the sum
	while(num>0){
		int r = num%10;
		sum += pow(r,len);
		num /= 10;
	}
	
	//Armstrong Logic
	if(sum == temp2){
		cout << temp2 << " is Armstrong Number" << endl;
	}else{
		cout << temp2 << " is Not an Armstrong Number" << endl;
	}
	
	return 0;
}
