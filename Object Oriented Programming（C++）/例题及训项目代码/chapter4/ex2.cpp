 //【例4.2】 初始化一维数组。
#include "iostream.h"
void main()
{
    int i;
    int iA1[6] = {1, 2,3,4,5,6};		 //对数组元素赋初值
    for(i=0;i<6;i+=2)
       cout<<iA1[i]<<"\t";     		 //隔位输出数组中元素
	cout<<"\n";
}
