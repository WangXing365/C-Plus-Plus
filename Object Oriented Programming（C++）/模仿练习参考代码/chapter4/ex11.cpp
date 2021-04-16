/*
1．有N名学生，学生的信息包含：学号、姓名、年龄和成绩，
   要求从键盘输入N名学生的信息，最后以成绩作关键字排序并输出。
2．在已建立好的N名学生信息中，统计不及格的人数并输出及格学生的相关信息。
*/
#include "iostream.h"
#define   N    3
struct Student
{ 
	long   no;			//学号
    char   name[16];	     //姓名
	int    age;         	//年龄
	int    score;      	//成绩
};
void fnSort(struct Student a[])						//以成绩作关键字排序
{
	int i,k;
	struct Student  t;
	for(k=1;k<=N-1;k++)      			    		//对数组进行冒泡排序
    {   for(i=N-1;i>=k;i--)
        if(a[i].score <a[i-1].score )
        {   t=a[i]; a[i]=a[i-1]; a[i-1]=t; }		//反序则交换
     }
}

void fnNoPassInfo(struct Student stu[])//统计不及格的人数并输出及格学生的相关信息。
{
	int i,count=0;
	cout<<"不及格学生信息：\n";
	for(i = 0; i<N; i++)
     {  
		if(stu[i].score <60)
		{
			count++;
			cout<<"学号:"<<stu[i].no;
			cout<<"姓名:"<<stu[i].name;
			cout<<"年龄:"<<stu[i].age;
			cout<<"成绩:"<<stu[i].score<<endl;
		}
     }
	cout<<"不及格的人数="<<count<<endl;
}
void main()
{   
	struct Student stu[N];
    int i;
	for( i=0;i<N;i++)
	{
		cout<<"请输入学生"<<i+1<<"的信息(No,Name,age,Score):\n";
	    cin>>stu[i].no>>stu[i].name>>stu[i].age>>stu[i].score;
	}
	fnSort(stu);
   	for(i = 0; i<N; i++)
     {  
        cout<<"学号:"<<stu[i].no;
        cout<<"姓名:"<<stu[i].name;
        cout<<"年龄:"<<stu[i].age;
        cout<<"成绩:"<<stu[i].score<<endl;
     }
	fnNoPassInfo(stu);
}
