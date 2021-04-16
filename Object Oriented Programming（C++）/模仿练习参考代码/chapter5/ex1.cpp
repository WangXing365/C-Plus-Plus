/*
1. 设计一个函数用于判断一个数是否为素数。
2. 设计一个函数用于求数组中的最小值。
*/
#include <iostream.h>
#include <stdio.h>
#include <math.h>
//1. 设计一个函数用于判断一个数是否为素数。
int IsPrime(int num)  
{
     int flag = 1,i;
     for(i = 2; i<=sqrt(num);i++)
       if(num%i == 0){ flag = 0;break;}
     return flag;
}
//2. 设计一个函数用于求数组中的最小值。
int fnMin(int a[],int n)
{
	int i,min;
	min = a[0];
	for(i=1;i<n;i++)
		if(a[i]<min)min = a[i];
	return min;
}
void main()
{
	int n,a[5]={1,4,-90,78,5};
   
   cout<<"请输入一个正整数：";
   cin>>n;
   if(IsPrime(n)==1)cout<<n<<"是一个素数"<<endl;
   else             cout<<n<<"不是素数"<<endl;
   cout<<"数组a的最小值="<<fnMin(a,5)<<endl;    
 
}
