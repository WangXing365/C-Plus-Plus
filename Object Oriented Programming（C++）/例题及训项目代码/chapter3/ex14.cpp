//【例3.14】 输入一个整数，判断其是否为素数。
#include "iostream.h"
#include "math.h"
void main()
{
	int i, j,k;
	cout<<"请输入一个正整数：";
	cin>>k;
	j = sqrt(k);
	for( i=2;i<=j;i++)
	{
		if(k%i == 0)break;          //如果i是k的因子，则跳出循环
	}
 	if(i >j)cout<<k<<"是素数。\n";  //判别前一条for循环语句的终止情况
	else 	cout<<k<<"不是素数。\n";
}

