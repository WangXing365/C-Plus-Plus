//【例2.14】理解赋值运算符和赋值表达式。
#include "iostream.h"
void main()
{
	int a, b, c, x, y;
	x = 5 + (y = 6);
	cout<<"a=b=c=2 is "<<(a=b=c=2);			//输出赋值表达式a=b=c=2的值
	cout<<"\na="<<a<<",b="<<b<<",c="<<c;  	//输出变量a，b，c的值 
	cout<<"\nx=5+=(y=6) is "<<(x=5+(y=6));	//输出赋值表达式x=5+=(y=6)的值
	cout<<"\nx="<<x<<",y="<<y<<endl;		     //输出变量x,y的值
}
