//【例5.17】 下面程序定义三个名为fnAbs的函数，它们只是参数类型不同，在main()函数中，调用该函数时编译系统会根据不同的参数类型确定调用哪个函数。
#include "iostream.h"
int fnAbs(int x)
{  
	int xabs;
    if (x >= 0) xabs = x;
    else        xabs = -x;
    return xabs;
}
float fnAbs(float x)
{  
	float xabs;
    if (x >= 0)xabs = x;
    else     xabs = -x;
    return xabs;
}
long  fnAbs(long x)
{ 
	long xabs;
    if (x >= 0L) xabs = x;
    else         xabs = -x;
    return xabs;
}
void main()
{  
	int a = -54;
     float b = -89.54f;
     long c = -23456L;
     cout<<"|a|= "<<fnAbs(a);          //调用第1个fnAbs()函数
     cout<< ",|b|= "<<fnAbs(b);		  //调用第2个fnAbs()函数
	cout<< ",|c|= "<<fnAbs(c)<<endl;   //调用第3个fnAbs()函数
}
