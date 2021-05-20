#include<iostream>
using namespace std;
float p(float n,float x)
{
	float a;
	if(n==0) return 1;
	else if(n==1) return x;
	else if(n>1)
	{
		a=((2*x-1)*p(n-1,x)*x-(n-1)*p(n-2,x))/n;
		cout<<"a="<<a<<'\t';
		return a;
	}
}
int main()
{
	float n,x;
	/*cout<<"请输入n和x的值：";
	cin>>n>>x;*/
	n=3;
	x=4;
	cout<<"函数值为："<<p(n,x); 
 } 
