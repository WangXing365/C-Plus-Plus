//【例6.18】已有若干个学生数据，这些数据包括学号、姓名、C++程序设计和英语成绩，求各门课程的平均分。编写一个程序，要求设计不同的成员函数求各门课程的平均分。
#include <iostream.h>
#include <string.h>
class  student
{
	int  no;
	char name[10];
	int  deg1;  	 	//C++程序设计成绩
	int  deg2;  	 	//英语成绩
	static int sum1; 	//C++程序设计成绩总分
	static int sum2; 	//英语成绩总分
	static int  sn;  	//总人数
public:
	student(int n,char na[],int d1,int d2)//构造函数
	{
		no=n;
		strcpy(name,na);
		deg1=d1;deg2=d2;
		sum1+=deg1;sum2+=deg2;
		sn++;
	}
	static double avg1(){return (sum1*1.0)/sn;}// 静态成员函数
	static double avg2(){return (sum2*1.0)/sn;}// 静态成员函数
	void disp()
	{
		cout<<"  "<<no<<","<<name<<","<<deg1<<","<<deg2<<endl;
	}
};

int student::sum1=0;//静态数据成员的初始化
int student::sum2=0;//静态数据成员的初始化
int student::sn=0;	 //静态数据成员的初始化
void main()
{
	student  s1(6001,"Li",67,89); 		//创建第一个学生对象
	student  s2(6002, "Ma",62,79);		//创建第二个学生对象
	student  s3(6003, "Li Ming",87,69);  //创建第三个学生对象
	student  s4(6004, "Zhan San",97,99); //创建第四个学生对象
	cout<<"输出结果"<<endl;
	s1.disp();
	s2.disp();
	s3.disp();
	s4.disp();
	cout<<"  C++平均分 : "<<s1.avg1()<<endl;
	cout<<"  英语平均分: "<<s1.avg2()<<endl;
}
