//【例9.10】 类模板的实在参数是类的实例。
#include <iostream.h>
class A
{
	int a;
public:
	A(){}
	A(int x){a = x;}
	A(A *p){this->a = p->a;}
	void operator!(){cout<<"a="<<a<<endl;}
};
template <class T>  
class B
{
private:
	int b;
	T *x;
public:
	B(int y,T *p){ b = y; x = new T(p);}
	void operator!()
	{
		cout<<"b="<<b<<endl;
		!*x;
	}
};
void main()
{
	A  a(1);    
	B<A> b(2,&a);    //实参是A类
	!b;
}
