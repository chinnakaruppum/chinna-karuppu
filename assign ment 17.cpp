#include<iostream>
using namespace std;
class student 
{
 public:
 	intregno,m1,m2,m3;
 	char name[20];
 	student()
 	{	 
 	cin>>reg no;
 	cin>>name;
 	cin>>m1>>m2>>m3;
 }
};
class teacher:public student
{
 int salary,experience;
 public:
 	teacher()
 	{
	 	cin>>name;
	 	cin>>salary;
	 	cin>>experience;
	 }
};
class principal:publc teacher;
{
 public student:
 	void show()
 	{
	 cout<<"name"<<name;
	 cout<<"salary"<<salary;
	 cout<<"experience"<<experience;
}
};
void main()
{
principal obj;
obj show();
}
