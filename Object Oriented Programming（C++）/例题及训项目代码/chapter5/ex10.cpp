//【例5.10】分析下面程序，在函数fnSwap()中，对形参的修改不影响其实参。
#include <iostream.h>
void fnSwap(int , int );   //函数声明
void fnSwap(int x, int y)  //函数定义
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void main()
{
	int a, b;
	a = 20;
	b = 10;
	cout<<"交换前：a = "<<a<<"，b = "<<b<<endl;
	fnSwap(a, b);   	 //函数的传值调用
	cout<<"交换后：a = "<<a<<"，b = "<<b<<endl;
}


