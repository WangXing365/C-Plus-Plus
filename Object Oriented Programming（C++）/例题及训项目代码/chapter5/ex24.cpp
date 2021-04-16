
//【例5.24】带参数的宏定义的应用。
#include "iostream.h"
#define   RECT(A, B)   A*B      //带参数的宏定义
void main()
{
	int a = 5,b=7,s;
	s = RECT(a,b);             //预处理后为: s = a*b; 
	cout<<"s = "<<s<<endl;
}
