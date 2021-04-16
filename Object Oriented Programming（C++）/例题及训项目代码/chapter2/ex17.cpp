//【例2.17】分析下列程序运行结果。
#include "iostream.h"
void main()
{
	int x,y;
	float a,b=1.8F;
	x = 30.9;           //赋值时因为x是整型变量，所以x = 30
	a = 40;             //赋值时因为a是实型变量，所以a = 40.000000
	y = x + a + b;	 //x+a+b=30+40.000000+1.8F=71.8F,但y是整型变量，所以y=71
	cout<<"y="<<y<<endl;
} 

