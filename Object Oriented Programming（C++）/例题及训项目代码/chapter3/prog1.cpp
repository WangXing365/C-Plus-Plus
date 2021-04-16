//项目1：爱因斯坦阶梯问题
#include "iostream.h"
void main()
{
	int  i;
	cout<<"三位阶梯数是：";   
	for(i = 100; i<1000; i++) /*for循环求100到1000内的所有3位数*/
		if(i%2 == 1 && i%3 == 2 && i%5 == 4 && i%6 == 5 && i%7 == 0) 
		   cout<<i<<"\t";    /*输出阶梯数*/
	cout<<"\n";
}

