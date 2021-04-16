//【例4.15】 结构体变量的引用。
#include "iostream.h"
struct Student
{ 
	long   no;					//学号
    char   name[16];				//姓名
	int    age;         			//年龄
	int    score;       			//成绩
};
void main()
{
    struct  Student  stu1,stu2;  	 //定义两个结构变量stu1,stu2
    cout<<"请输入学生1的信息\n(No,Name,Age,Score):";
    cin>>stu1.no>>stu1.name>>stu1.age>>stu1.score;
    cout<<"请输入学生2的信息:\n(No,Name,Age,Score):";
    cin>>stu2.no>>stu2.name>>stu2.age>>stu2.score;
	cout<<"学生1: ";
    cout<<stu1.no<<","<<stu1.name<<","<<stu1.age<<","<<stu1.score<<"\n";
    cout<<"学生2: ";
	cout<<stu2.no<<","<<stu2.name<<","<<stu2.age<<","<<stu2.score<<"\n";
}

