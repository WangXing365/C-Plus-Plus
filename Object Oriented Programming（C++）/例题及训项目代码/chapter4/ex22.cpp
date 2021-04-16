//【例4.22】长整型指针变量自加运算。
#include "iostream.h"
void main()
{
    long  x  = 9L;
    long  *px= &x;
	cout<<" px的当前值是："<<oct<<px<<endl;
    px++;
    cout<<"px加1后的值是："<<px<<endl;
}
