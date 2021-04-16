/*
设计一个小学生类Pupil，包括学号、姓名、班级、语文、数学、英语等学科的成绩，
成员函数display()用来显示学生信息。在此基础上派生出一个中学生类Mstudent，
添加物理、化学等学科成绩，并且也包括显示学生信息的成员函数display()。
*/
#include "iostream.h"
#include "string.h"

class Pupil
{
protected:
	long no;         //学号
	char name[16];   //姓名
	char iclass[10]; //班级
	int  s1,s2,s3;   //语文、数学、英语成绩
public:
	Pupil(long id,char n[],char ic[],int s1,int s2,int s3)
	{
		no=id;             //学号
	    strcpy(name,n);    //姓名
		strcpy(iclass,ic); //班级
		this->s1=s1;
		this->s2=s2;
		this->s3=s3;
	}
	virtual void display()			//基类中的虚函数
	{ 
		cout<<"调用Pupil基类的display()函数.\n";
		cout<<"学号:"<<no<<",姓名:"<<name<<",班级:"<<iclass<<",语文:"<<s1<<",数学:"<<s2<<",英语:"<<s3<<endl;
	} 
};

class Mstudent: public Pupil
{
	int  phusics,chemistry;
public:
	Mstudent(int p,int c,long id,char n[],char ic[],int s1,int s2,int s3): Pupil(id,n,ic,s1,s2,s3)
	{
		phusics=p;chemistry=c;
	}
	virtual void display()		   //派生类中的虚函数与基类中的虚函数有不同的实现
	{
		cout<<"调用Mstudent类的display()函数.\n";
		cout<<"物理:"<<phusics<<"、化学:"<<chemistry<<endl;
		cout<<"学号:"<<no<<",姓名:"<<name<<",班级:"<<iclass<<",语文:"<<s1<<",数学:"<<s2<<",英语:"<<s3<<endl;
	}
};

void  fun(Pupil &c)
{
	 c.display();                                          //运行时才确定调用那个虚函数
}
void main()
{
	Pupil  P1(2014L,"张望","一班",78,80,90),*p;
	Mstudent M1(99,88,2014L,"张三","二班",68,80,60);
	cout<<"1. 通过对象来调用相应的虚函数："<<endl;         //不会实现多态
	P1.display();
	M1.display();

	cout<<"\n2. 通过引用和指针来调用相应的虚函数："<<endl; //实现多态
	fun(P1);
	p = &P1;
	p->display();
	fun(M1);
	p = &M1;
	p->display();
}
