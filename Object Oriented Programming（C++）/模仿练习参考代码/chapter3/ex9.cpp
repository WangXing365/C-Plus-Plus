/*
1．求任意两个正整数的最大公约数和最小公倍数。
2．输出10～100之间的全部素数。
3．计算满足：1^2+2^2+3^2+…+n^2<1000的最大n值。
*/
#include <iostream.h>

void main()
{
	//1．求任意两个正整数的最大公约数和最小公倍数。
    int m,n,k,ji;
    cout<<"请输入两个整数m,n（m>=n）: ";
    cin>>m>>n;
	ji = m*n;
	if(m<n){
		k = m;
		m = n;
		n = k;
	}
 	while(n)
	{	
		k = m%n;
		m = n;
		n = k;
	}
    cout<<"m和n的最大公约数="<<m<<endl;
    cout<<"m和n的最大小公倍数="<<ji/m<<endl;

	//2．输出10～100之间的全部素数。
    int i;
	cout<<"10～100之间的全部素数:\n";
	for(i=10;i<100;i++)
	{
		for(k=2;k<i;k++)
			if(i%k==0)break;
		if(k==i)cout<<i<<",";
	}
	cout<<"\n";
	//3．计算满足：1^2+2^2+3^2+…+n^2<1000的最大n值。
	int iSum=1;
	i=2;
	while(iSum<10)
	{
		iSum += i*i;
		i++;
	}
	cout<<"满足：1^2+2^2+3^2+…+n^2<1000的最大n="<<i-2<<endl;
}
