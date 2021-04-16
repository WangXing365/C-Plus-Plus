/*
1．使用函数模板，实现例9.1交换两个变量的值。
2．使用函数模板，求一个数的绝对值。
3．使用函数模板进行平均成绩的计算。
*/
#include "iostream.h"
template <class T>
void fnSwap(T &x,T &y)				//1. 交换两个变量的值的函数模板
{
	T temp;
	temp = x; 
	x = y;
	y = temp;
}

template <class T>
T fnAbs(T x)						//2. 求绝对值的函数模板
{
	T temp;
	temp = x;
	if(x<0)temp = -x; 
	return temp;
}

template <class T>
T fnAve(T *x,int n)					//3. 计算平均成绩的函数模板
{
	T  sum ;
	sum=x[0];
	for(int i=1;i<n;i++)
	{
		sum += x[i];
	}
	return sum/n;
}

void main()
{
	int a=9,b=10;
	cout<<"交换前：a="<<a<<",b="<<b<<endl;
	fnSwap(a,b);
	cout<<"交换后：a="<<a<<",b="<<b<<endl;
    cout<<"|-9|="<<fnAbs(-9)<<endl;
	float c[]={ 2,3,4,44,56,55,94,7};
	cout<<"平均成绩="<<fnAve(c,8)<<endl;
}