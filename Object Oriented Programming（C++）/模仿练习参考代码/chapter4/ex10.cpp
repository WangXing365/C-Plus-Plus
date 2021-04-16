/*
定义一个描述学生信息的结构类型（含有：学号、姓名、5门课程成绩和总成绩）。
然后定义结构变量。输入其相关信息，统计总成绩，最后输出该学生的所有信息。
*/
#include "iostream.h"
struct Student
{ 
	long   no;					//学号
    char   name[16];				//姓名
	int    score[5];       			//成绩
	int    total;
};
void main()
{
    struct  Student  stu1;  	 //定义结构变量stu1
	int i;
    cout<<"请输入学生的信息\n(No,Name,Score,Score2,Score3,Score4,Score5):\n";
    cin>>stu1.no>>stu1.name;
	for( i=0;i<5;i++)
		cin>>stu1.score[i];
	stu1.total =0;
	for( i=0;i<5;i++)
		stu1.total +=stu1.score[i];

	cout<<"学生信息: ";
    cout<<stu1.no<<","<<stu1.name;
	for( i=0;i<5;i++)
		cout<<","<<stu1.score[i];
    cout<<",总成绩="<<stu1.total <<endl;
}
