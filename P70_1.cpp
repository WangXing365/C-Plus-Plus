/*
 *面向对象程序设计（c++） P70模仿练习 第一题
 *从键盘顺序输入10名参赛者的成绩，统计总成绩
 */ 
#include<iostream>
using namespace std;
int main()
{
	int a[10],i,sum=0;
	cout<<"请输入10名参赛者的成绩,求出总成绩"<<"\n";
	for(i=0;i<10;i++)
	{
	cout<<"请输入第"<<i+1<<"个同学的成绩:"; 
	cin>>a[i];
	sum+=a[i];
	}
	cout<<"10名参赛者总成绩为："<<sum;
}
