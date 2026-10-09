#include <iostream>
using namespace std;
class Student
{
	public:
	int roll_no;
	string name;
	float marks;
void Accept()
{
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter your roll number:";
	cin>>roll_no;
	cout<<"Enter your marks:";
	cin>>marks;
}
void Result()
{
if(marks>=40)
{
	cout<<"PASS HO GAYAAAA";
	}
else
{
	cout<<"FAILURE AT PEAK";
	}
}
void display()
{
	cout<<"***STUDENT NAME IS***"<<name<<endl;
	cout<<"***STUDENT ROLL NUMBER IS***"<<roll_no<<endl;
	cout<<"***STUDENT'S MARKS ARE***"<<marks<<endl;
	Result();
	}
};
int main()
{
	Student s;
	s.Accept();
	s.display();
return 0;
}
