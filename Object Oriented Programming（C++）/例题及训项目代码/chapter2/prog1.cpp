//项目1：求解方程ax2+bx+c=0 （a不为0）
#include "iostream.h"
#include "math.h"
void main()
{
	double a,b,c,x1,x2,p;
	cout<<"请输入一元二次方程的系数a,b,c: ";
	cin>>a>>b>>c;
	p = b*b-4*a*c;
	x1 = (-b+sqrt(p))/(2*a);
	x2 = (-b-sqrt(p))/(2*a);
	cout<<"x1="<<x1<<",x2="<<x2<<endl;
}
