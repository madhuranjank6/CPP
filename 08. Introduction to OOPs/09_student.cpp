//C++ Program to write a student class and take their roll number, name and marks in 3 subjects as input and display their total marks and grade

#include<iostream>
using namespace std;

typedef int marks;

class Student{
	private:
		int roll;
		string name;
		marks m1,m2,m3;
		int total;
	public:
		Student(int roll, string name,marks m1, marks m2, marks m3){
			this -> roll = roll;
			this -> name = name;
			this -> m1 = m1;
			this -> m2 = m2;
			this -> m3 = m3;
		}
		
		//Method to calculate total marks
		int totalMarks(){
			return m1+m2+m3;
		}
		
		float avg(){
			float avg = totalMarks()/3;
			return avg;
		}
		
		//function to find the grade
		char grade(){
			if(avg()>=60){
				return 'A';
			}
			else if(avg()>=40 && avg() < 60){
				return 'B';
			}else{
				return 'C';
			}
		}
		//function to display the details
		void display(){
			cout << "------------------------Details-----------------------------"<<endl;
			cout << "Name: " << name << endl;
			cout << "Roll: " << roll << endl;
			cout << "Total Marks: " << totalMarks() << endl;
			cout << "Grade: " << grade() << endl;
		}
};


//main Function
int main(){
	int roll;
	string name;
	marks m1,m2,m3;
	
	cout << "Enter the name of the Student: " << endl;
	getline(cin,name);
	cout << "Enter the Roll No.: " << endl;
	cin >> roll;
	cout << "Enter the marks in 3 subjects: " << endl;
	cin >> m1 >> m2 >> m3;
	
	Student s1(roll,name,m1,m2,m3);
	s1.display();
}
