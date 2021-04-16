//【例3.9】 用for语句计算1+2+…+100。

#include "iostream.h"
void main( )
{
	int Sum,i;
	for(Sum=0,i=1;i<=100;i++)       //初始表达式中，逗号运算符"，"
	Sum += i;
	cout<<"Sum is "<<Sum<<endl;
	for(Sum=0,i=1;i<=100;Sum+=i,i++)//增值表达式中，逗号运算符"，"
	{     ;    }                    //循环体是一个空语句
	cout<<"Sum is "<<Sum<<endl;
}
