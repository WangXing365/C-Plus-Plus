//【例4.6】从键盘输入10个字符存储在数组中，然后再将字符串逐个输出。
#include "iostream.h"
void main()
{
    char  ch[10],i;
    for(i=0;i<10;i++)
   		cin>>ch[i];
    for( i= 0; i<10; i++)
       cout<<ch[i]<<" ";
}

