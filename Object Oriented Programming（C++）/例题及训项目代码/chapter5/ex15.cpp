//【例5.15】 用引用实现交换两个数值。
#include <iostream.h>
void fnSwap(int &x, int &y); //x和y都说明为引用参数
void main()
{   
	int a, b;
	a = 20;
	b = 10;
	cout<<"交换前：a= "<<a<<",b= "<<b<<endl;
	fnSwap(a, b);
	cout<<"交换后：a= "<<a<<",b= "<<b<<endl;
}
void fnSwap(int &x, int &y)//x和y都说明为引用参数
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

