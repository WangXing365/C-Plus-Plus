/*
1. 使用递归方法，求Fibonacci数列的第Ｎ项。
2. 一数列: 1、12、123、1234、12345、123456..., 递归算法求第n个数（n<=9）。
*/

#include "iostream.h"
long  Fibonacci(int  n) ;  		//函数声明
//1. 使用递归方法，求Fibonacci数列的第Ｎ项。
long  Fibonacci(int  n)    		//定义递归函数
{
	long   f;
	if(n ==1 || n==2)
		 f = 1;
    else f = Fibonacci(n-1) + Fibonacci(n-2);
    return  f;
}
//2. 一数列: 1、12、123、1234、12345、123456..., 递归算法求第n个数（n<=9）。
long  fn(int n)
{
	long k;
	if(n == 1)k=1;
	else      k = 10L*fn(n-1)+n;
	return k;
}

void main()
{
    int  n;
	cin>>n;
	cout<<"Fibonacci数列的第"<<n<<"项="<<Fibonacci(6)<<endl;

	cout<<fn(4)<<endl;

}
