//【例8.6】分析以下程序的运行结果。
#include "iostream.h"
class Base
{
 public:
	void fun(){cout<<"Base::fun()"<<endl;}			//重载函数
	void fun(int i){cout<<"Base::fun(int i)"<<endl;}	//重载函数
};
class Derived: public Base
{
public:
	void fun2()					//派生类与基类没有同名所以没有隐藏
	{cout<<"Derived::fun2()"<<endl;}
};
void main()
{
	Derived d;
	d.fun ();
	d.fun (1);      
}
