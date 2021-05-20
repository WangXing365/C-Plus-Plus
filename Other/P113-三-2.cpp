//编写函数求1~之和，要求函数原型为“long sum(int n); " 
#include<iostream>
using namespace std;
long sum(int n)
{
	int a;
	for(int i=1;i<=n;i++)
	{
		a+=i;
	}
	return a;
}
int main()
{
	int a,b;
	cout<<"请输入数值：";
	cin>>a;
	b=sum(a);
	cout<<"1~"<<a<<"之和为："<<b<<'\0';
}
