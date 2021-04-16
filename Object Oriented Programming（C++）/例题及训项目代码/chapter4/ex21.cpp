
//【例4.21】 短整型指针变量自加运算
#include "iostream.h"
void main()
{
    short x = 10;
    short *px;
    px = &x;
    cout<<" px的当前值是："<<oct<<px<<endl;
    px++;
    cout<<"px加1后的值是: "<<px<<endl;
}
