//【例9.6】具有常规参数的函数模板的定义和使用。
#include <iostream.h>
template <class T,int k>
T fnAver(T x,T y)
{
   return (x+y)/k;
}
void main()
{
	float a,b,c;
	cout<<"请输入两实数：";
	cin>>a>>b;
	c = fnAver<float,2>(a,b);  //A，实例化为fnAver(float,float)，且k=2
	cout<<"c="<<c<<endl;
}
