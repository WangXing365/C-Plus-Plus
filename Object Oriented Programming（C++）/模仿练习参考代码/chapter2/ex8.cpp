//正四棱台上底边长为a,下底边长为b,高为h,求其体积。
#include "iostream.h"
#include "math.h"
void main()
{
	float a,b,h,s1,s2,v;
	cout<<"输入正四棱台上底边长a,下底边长b,高h:";
	cin>>a>>b>>h;
	s1 = a*a;
	s2 = b*b;
	v = h*(s1+s2+sqrt(s1*s2))/3.0F;
	cout<<"正四棱台体积="<<v<<"\n";
}