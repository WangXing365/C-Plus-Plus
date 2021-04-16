//【例2.15】理解逗号运算符和逗号表达式。
#include "iostream.h"
void main()
{
  	int a, b, c, d;
  	a = 10, b = 10, c = 10;
  	d = (c++, c+10, 100-c);
  	cout<<"a="<<a<<",b="<<b<<",c="<<c<<",d="<<d<<endl;
  	c = (d=a+b),(b+d);
  	cout<<"a="<<a<<",b="<<b<<",c="<<c<<",d="<<d<<endl;
}


