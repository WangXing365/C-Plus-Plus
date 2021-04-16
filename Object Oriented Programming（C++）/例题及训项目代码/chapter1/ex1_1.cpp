//【例1-1】  一个简单的C++示例程序。
//this is my first C++ program.  ex1.cpp
#include "iostream.h"
int fnAdd(int x, int y);
void main()
{	
	int  a,b;
	a = 5;
	b = 7;
	int c = fnAdd(a,b);     //调用fnAdd()函数
	cout<<"a+b="<<c<<endl;  //输出a+b的值
}
int  fnAdd(int x, int y)
{
	int z = x+y;
	return z;
}
