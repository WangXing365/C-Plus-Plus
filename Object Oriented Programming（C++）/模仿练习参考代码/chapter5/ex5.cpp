/*
编写一个带默认参数的函数求n!，n的缺省值为10。在主函数中调用两次该函数，
一次给出实参，另一次不给实参，体验函数默认值的意义。
*/
#include "iostream.h"
long fnFact(int n=10)
{
	if(n==1)return 1L;
	else    return n*fnFact(n-1);
}
void main()
{
    cout<<fnFact()<<","<<fnFact(4)<<endl;
}
