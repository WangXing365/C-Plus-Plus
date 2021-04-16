//【例8.7】修改例8.6,在派生类中增加fun()函数，分析程序的运行结果。
#include "iostream.h"
 class Base
 {
 public:
	void fun(){cout<<"Base::fun()"<<endl;}			//重载函数
	void fun(int i){cout<<"Base::fun(int i)"<<endl;}//重载函数
 };
 class Derived: public Base
 {
 public:
		void fun(int i) 				//在派生类中会隐藏掉基类的同名函数
		{cout<<"Derived::fun(int i)"<<endl;}
		void fun2(){cout<<"Derived::fun2()"<<endl;}	
 };
 void main()
 {
	Base b;
	b.fun ();
	b.fun (2);
	Derived d;
	d.fun (1);
  //d.fun ();      //语法错误
 }
