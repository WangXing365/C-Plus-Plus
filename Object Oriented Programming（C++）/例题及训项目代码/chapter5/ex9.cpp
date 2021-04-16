//【例5.9】 参数的传值调用。
#include "iostream.h"
void fun(float a,float b);	//函数声明
void fun(float a,float b)   //函数定义
{
	float sum;
	sum= a+b;
	cout<<sum<<endl;
}
void main()
{
	float  x=5.0F,y=8.5F;
	fun(x,y);              //函数的传值调用
}

