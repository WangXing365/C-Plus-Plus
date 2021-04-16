/*
1. 使用宏定义求两个数之和。
2. 使用宏定义实现两数的交换
*/
#include <iostream.h>
#define  SUM(a,b)    (a)+(b)
#define  MYSWAP(a,b)  { int t = a;a = b;b = t;}

void main()
{

	int x=8,y=9;
	MYSWAP(x,y);
	cout<<x<<","<<y<<","<<SUM(x,y)<<endl;
}