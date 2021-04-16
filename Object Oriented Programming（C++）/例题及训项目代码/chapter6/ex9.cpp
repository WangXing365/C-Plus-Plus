//【例6.9】设计一个描述学生的类，学生基本信息包含：姓名、性别、年龄和高度。设置函数带默认参数。
#include "string.h"
#include "iostream.h"
class Student
{
	char Name[8];
	char Sex;
	int  Age;
	int  Height;
public:
	//带默认参数的成员函数
	void SetData(char n[]="张三",char s='m',int a=18,int h=167);
	void Display();                                //成员函数声明
};
void Student::SetData(char n[], char s,int a,int h)//成员函数的定义
{
	strcpy(Name,n);            					//设置姓名
	Sex = s;           						//设置性别
	Age = a;								     //设置年龄		
	Height = h;            					     //设置身高
}
void Student::Display()                            //显示学生信息
{
	cout<<"学生基本信息"<<endl;  
	cout<<"姓名："<<Name<<endl;	
	cout<<"性别："<<Sex <<endl;		
	cout<<"年龄："<<Age <<endl;
	cout<<"身高："<<Height<<endl; 
}
