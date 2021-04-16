//【例5.8】 验证哥德巴赫猜想：一个大偶数可以分解为两个素数之和。试编程序，将106到110之间的全部偶数分解成两素数之和。
#include "iostream.h"
#include "math.h"
	bool fnPrime(int n); 			//函数声明
void main()
{
	int a,b,m;
	for(m=106;m<=110;m+=2)
	for(a=2;a<=m/2;a++)
	{	if(fnPrime(a))		//函数调用
		{
			b = m-a;
			if(fnPrime(b)) //函数调用
			{
				cout<<m<<"="<<a<<"+"<<b<<endl;
				break;
			}
		}
	}
}

bool fnPrime(int n)		 //函数定义
{
	int i,k;
	k = (int)sqrt(n);
	for(i=2;i<=k;i++)
		if(n%i==0)return false;
	return true;
}
