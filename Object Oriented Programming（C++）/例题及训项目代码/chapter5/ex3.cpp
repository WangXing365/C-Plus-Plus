//【例5.3】 编一函数，输出x 的n次幂。
#include "iostream.h"
void fnPower(float x,int n)    //函数定义
{
	int  i;
	float  p=1.0F;
	for (i=1,p=1;i<=n;i++)
	p *= x;
	cout<<x<<"的"<<n<<"次幂="<<p<<endl;
}
void main( )
{
	float  x;
	int   n;
	cout<<"输入x=?  n=? \n";
	cin>>x>>n;
	fnPower(x, n);	            //函数调用
}
