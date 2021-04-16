//【例5.21】重名局部变量和全局变量的作用域。
#include <iostream.h>
int a=3,b=5;    			//a,b 是全局变量;
void main()
{
	int a = 8;  			//a局部变量,
	int c;
	c = a>b?a:b;			//这里使用的是局部变量a
	cout<<c<<endl;
}

