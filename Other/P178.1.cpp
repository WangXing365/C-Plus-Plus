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
		cout<<"������"<<name<<endl;
		cout<<"���䣺"<<age<<endl;
		cout<<"�γ�1�ĳɼ���"<<ke1<<endl;
		cout<<"�γ�2�ĳɼ���"<<ke2<<endl;
		cout<<"�γ�3�ĳɼ���"<<ke3<<endl;
	}
};
int main(){
	student stu1;
	char na[80];
	int a; 
	float x,y,z;
	cout<<"����������"<<endl; 
	cin>>na;
	cout<<"�������䣺"<<endl;
	cin>>a; 
	cout<<"����γ�1�ĳɼ���"<<endl;
	cin>>x;
	cout<<"����γ�2�ĳɼ���"<<endl;
	cin>>y;
	cout<<"����γ�3�ĳɼ���"<<endl;
	cin>>z;
	stu1.set(na,a,x,y,z);
	//stu1.set("zhangsan",18,96,97,98);
	stu1.display();
}
