//【例2.7】 算术运算符优先级和结合方向应用。
#include <iostream.h>
void main()
{
	float a = 2.5F;
	int z = 5, x;
	x = (int)a++ + 4 + --z*4;     //相当于 x = (int)(a++)+4+(--z)*4;
	cout<<"a="<<a<<",z="<<z<<",x="<<x<<endl;
}

