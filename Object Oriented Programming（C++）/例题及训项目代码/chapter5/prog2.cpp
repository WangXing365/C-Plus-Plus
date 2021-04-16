//项目2：递归解决年龄问题
#include "iostream.h"
int age(int  n) ;  		//函数声明
int age(int  n)    		//定义递归函数
{
	int  f;
	if(n == 1)f = 10;
	else      f = age(n-1) + 2;
	return  f;
}
void main()
{
	int  iMen, iAge;
	cout<<"你想知道第几个人的年龄: ";
	cin>>iMen;
	iAge = age(iMen);
	cout<<"第"<<iMen<<"的年龄是 "<<iAge<<endl;
}
