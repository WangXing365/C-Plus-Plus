//【例8.8】修改例8.7,在成员函数fun()前增加关键字virtual,，分析运行结果。
	#include "iostream.h"
	class Base
	{
	public:
		void fun(){cout<<"Base::fun()"<<endl;}					   //重载函数
		virtual	void fun(int i){cout<<"Base::fun(int i)"<<endl;}   //重载函数
	};
	class Derived: public Base
	{
	public:
		virtual	void fun(int i){cout<<"Derived::fun(int i)"<<endl;}//覆盖
		void fun2(){cout<<"Derived::fun2()"<<endl;}		
	};
void main()
{
	Base b,*p;
	p = &b;
	p->fun (); p->fun (2);
	Derived d;
	d.fun (1);
	p = &d;
	p->fun (1);
}

