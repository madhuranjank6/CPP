// C++ program to demonstrate typedef

#include<iostream>
using namespace std;

typedef int marks;
typedef int roll;

int main(){
	marks m1,m2,m3;
	roll r1,r2,r3;
	
	cout << "Enter the roll and marks of student1: "<<endl;
	cin >> r1 >> m1;
	cout << "Enter the roll and marks of student2: "<<endl;
	cin >> r2 >> m2;
	cout << "Enter the roll and marks of student3: "<<endl;
	cin >> r3 >> m3;
	
	cout << "Student1\nRoll = "<<r1<<"\nMarks = "<<m1<<endl;
	cout << "Student2\nRoll = "<<r2<<"\nMarks = "<<m2<<endl;
	cout << "Student3\nRoll = "<<r3<<"\nMarks = "<<m3<<endl;
	return 0;
}
