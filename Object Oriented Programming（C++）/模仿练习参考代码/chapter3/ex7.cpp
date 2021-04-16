/*
 用for语句做如下练习。
1. 计算1+3+5+…+99
2. 计算n!
3. 统计100以内同时能被3，5，7整除的数的个数。
*/
#include "iostream.h"
void main( )
{
	int Sum,i,n,iCount;
	//1. 计算1+3+5+…+99
	for(Sum=0,i=1;i<100; i+=2 )       
		Sum += i;
	cout<<"1+3+5+…+99="<<Sum<<endl;
	//2. 计算n!
	cout<<"请输入n(n<5):";
	cin>>n;
	for(Sum=1,i=1; i<=n ;i++) 
		Sum *= i;
    cout<<n<<"!="<<Sum<<endl;
	//3. 统计100以内同时能被3，5，7整除的数的个数
	iCount=0;
	for(i=1;i<100;i++)
		if(i%3==0 &&i%5==0 && i%7==0)iCount++;
	cout<<"100以内同时能被3，5，7整除的数的个数="<<iCount<<endl;
}
