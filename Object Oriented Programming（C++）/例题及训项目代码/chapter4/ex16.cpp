//【例4.16】 结构变量的初始化。
#include "iostream.h"
struct Student
{ 
    		long  no;             //学号
		char name[16];        //姓名
		int age;			   //年龄
		int score;            //成绩
}stu1 = {2012001L,"ZhanSan",17,85};//定义变量stu1并初始化
void main()
{
    struct  Student stu2 ={2012002L,"WangWu",16,95};//定义变量stu2并初始化
    cout<<"学生1的信息: ";
    cout<<stu1.no<<","<<stu1.name<<","<<stu1.age<<","<<stu1.score<<endl;
    cout<<"学生2的信息: ";
    cout<<stu2.no<<","<<stu2.name<<","<<stu2.age<<","<<stu2.score<<endl;
}

