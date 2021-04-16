/*
 分别用while和do-while语句作如下练习。
1. 计算1/1+1/2+…+1/50
2. 计算1^2+2^2+3^2+…+10^2的值
*/
#include "iostream.h"
void main( )
{
	int i,iSum;
	double Sum;
	Sum = 0.0;
	i = 1;
	do{
		Sum += 1.0/i;
		i++;
	}while(i<=50);
	cout<<"1/1+1/2+…+1/50="<< Sum<<endl;
    i=1;
	iSum=0;
	while(i<=10)
	{
		iSum += i*i;
		i++;
	}
	cout<<"1^2+2^2+3^2+…+10^2="<< iSum<<endl;
}
