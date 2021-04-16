//【例5.11】 将例5.10中的fnSwap( ) 函数修改为传址调用。
#include "iostream.h"
void fnSwap( int *x, int *y);//函数声明,形参说明为指针形式
void main()
{
	int a, b;
	a = 20;
	b = 10;
	cout<<"交换前：a = "<<a<<"，b = "<<b<<endl;
	fnSwap(&a, &b);    //函数调用,实参传的是地址
	cout<<"交换后：a = "<<a<<"，b = "<<b<<endl;
}
void fnSwap( int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

