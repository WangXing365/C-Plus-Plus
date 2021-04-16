//【例9.5】 多参数的函数模板。
#include <iostream.h>
template <class T1,class T2>
void fnPrint(T1 x,T2 y,int z)
{
   cout<<x<<","<<y<<","<<z<<endl;
}
void main()
{
	fnPrint('#',4,5);   //实例化为fnPrint(char x,int y,int z)
	fnPrint(6,7,8);     //实例化为fnPrint(int x,int y,int z)
	fnPrint(9.5,10,11); //实例化为fnPrint(double x,int y,int z)
}

