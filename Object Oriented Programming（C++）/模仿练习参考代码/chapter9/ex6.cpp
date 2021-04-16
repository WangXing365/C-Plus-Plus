/*
1．求一个函数的表达式f(x,y,z) = x + y/z的值，
   注意z不能为0，编程捕捉z为0时的异常，并提醒用户除数不能为0。
2．编写一个程序，求出输入的平方根，并用异常处理机制处理负数的情况。
*/
#include <iostream.h>
#include <math.h>
 double fnFun(int ,int,int);
 double fnFun(int x,int y,int z)
 {   
	double f;
	
	try 
	{
		if(z == 0)throw "除数不能为0";
		f = (double) x +(double) y/z;
		return f;
	}
	catch (char *str)                       
     {
        cout<<str<<endl;
     }
	return 0;
 }

 double fnSqrt(int n)
 {
	 try
	 {
		 if(n<0)throw "负数不能开平方！";
		 return sqrt(n);
	 }
	 catch (char *str)                        
     {
        cout<<str<<endl;
     }
	return -1;
 }
 void main()
 {
	 cout<<fnFun(-2,3,4)<<endl;
	 cout<<fnFun(-2,3,0)<<endl;
	 cout<<fnSqrt(4)<<endl;
	 cout<<fnSqrt(-4)<<endl;
 } 
