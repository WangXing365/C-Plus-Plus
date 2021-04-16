//【例3.10】 用for语句计算1+2+…+100。

#include "iostream.h"
void main( )
{
	int Sum,i;
	for(Sum=0,i=1;i<=100;  )       //表达式3缺省
	Sum += i++;
	cout<<"Sum is "<<Sum<<endl;
	for(Sum=0,i=1;   ;Sum+=i,i++) //"条件"表达式缺省, 约定为true
	if(i>100)break;            //但条件满足时，break语句跳出循环
	cout<<"Sum is "<<Sum<<endl;
	Sum=0;i=1;
	for(   ;    ;    )           //三个表达式都缺省
	{
		Sum+=i++;
		if(i>100)break;           //这种情况一般都会用if语句来设置跳出循环
	}
	cout<<"Sum is "<<Sum<<endl;
}
