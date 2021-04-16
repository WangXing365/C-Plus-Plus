/*
1．设计一个交换两个变量的值的函数模板，解决例9.1的函数重载方法。
2．设计一个求两个数之和的函数模板。
3．设计一个冒泡排序的函数模板。
*/
#include "iostream.h"
template <class T>
void fnSwap(T &x,T &y)				//1.交换两个变量的值的函数模板
{
	T temp;
	temp = x; 
	x = y;
	y = temp;
}

template <class T>
T fnSum(T x,T y)				   //2.求两个数之和的函数模板
{
	T temp;
	temp = x+y; 
	return temp;
}
void main()
{
	int a=9,b=10;
	cout<<"交换前：a="<<a<<",b="<<b<<endl;
	fnSwap(a,b);
	cout<<"交换后：a="<<a<<",b="<<b<<endl;
	cout<<"a+b="<<fnSum(a,b)<<endl;
}
