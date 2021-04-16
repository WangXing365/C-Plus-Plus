//【例3.11】 用for语句计算1+2+…+100。
#include "iostream.h"
void main( )
{
	int Sum;
	Sum=0;
	for(int i=1;i<=100;i++)   //在初始表达式中声明变量i
		Sum += i;
	cout<<"Sum is "<<Sum<<endl;
}
