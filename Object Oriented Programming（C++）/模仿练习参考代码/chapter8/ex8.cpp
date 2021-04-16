/*
设计一个评选优秀教师和学生的程序，其类层次结构如图8-14所示。
当输入一系列教师或学生记录后，将优秀教师和学生的姓名列出来，并采用相关数据进行测试。
*/
#include <iostream.h>
#include <string.h>
class base  						//抽象基类
{
protected:
	char  name[12];
     double score;
public:
	base(char n[],double s)
	{ strcpy(name,n);
	  score = s;
	}
     virtual  bool Isgood()=0;      //纯虚函数
	 virtual  void disp() = 0;	    //纯虚函数
};
class Student: public base			//定义学生类
{
public:
    Student(char n[],double s): base(n,s){}
	bool Isgood( )
    {
		if(score>=90.0)
			  return true;
		else  return false;
    }
	void disp()
	{
		cout<<name<<",考试成绩："<<score<<endl;
	}
};
class Teacher: public base			//定义教师类
{
public:
    Teacher(char n[],double s): base(n,s){}
	bool Isgood( )
    {
		if(score>=3.0)
			  return true;
		else  return false;
    }
	void disp()
	{
		cout<<name<<",论文篇数："<<score<<endl;
	}
};
void  main() 
{
	base *p;						//定义抽象类指针
    Teacher obj1("李梅老师",5.0);	//创建教师对象obj1
    Student obj2("张恒学生",92.0);	//创建学生对象obj2 
    p=&obj1;						//p指向教师对象obj1
	if(p->Isgood())p->disp();
	p=&obj2;						//p指向学生对象obj2
	if(p->Isgood())p->disp();
}
