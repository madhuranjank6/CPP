// C++ Program to display the grade of the student

/*
total = m1+m2+m3
avg = total/3
if avg >= 60, Grade = A
if 35<=avg<60, Grade = B
ig avg < 35, Grade = C
*/

#include<iostream>
using namespace std;

int main(){
	int m1,m2,m3,total;
	float avg;
	cout << "Enter the marks of 3 subjects out of 100: "<<endl;
	cin >> m1 >> m2 >> m3;
	total = m1+m2+m3;
	avg = total/3;
	if(avg>=60){
		cout << "A" << endl;
	}else{
		if(avg>=35 && avg<60){
			cout << "B" <<endl;
		}else{
			cout << "C" << endl;
		}
	}
	return 0;
}
