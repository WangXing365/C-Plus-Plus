#include<iostream>
//#include<string>
#include<string.h>
using namespace std;
class student{
	char name[80];
	int age;
	float ke1;
	float ke2;
	float ke3;
public:
	void set(char na[],int a,float x,float y,float z){
	strcpy(name,na);
	age=a;
	ke1=x;
	ke2=y;
	ke3=z;
	}
	void display(){
		cout<<"姓名："<<name<<endl;
		cout<<"年龄："<<age<<endl;
		cout<<"课程1的成绩："<<ke1<<endl;
		cout<<"课程2的成绩："<<ke2<<endl;
		cout<<"课程3的成绩："<<ke3<<endl;
	}
};
int main(){
	student stu1;
	char na[80];
	int a; 
	float x,y,z;
	cout<<"输入姓名："<<endl; 
	cin>>na;
	cout<<"输入年龄："<<endl;
	cin>>a; 
	cout<<"输入课程1的成绩："<<endl;
	cin>>x;
	cout<<"输入课程2的成绩："<<endl;
	cin>>y;
	cout<<"输入课程3的成绩："<<endl;
	cin>>z;
	stu1.set(na,a,x,y,z);
	//stu1.set("zhangsan",18,96,97,98);
	stu1.display();
}
