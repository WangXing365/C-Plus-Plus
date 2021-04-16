//【例7.3】私有继承示例。
#include "iostream.h"
class Base    //定义基类
{
		int a;
protected:
		int b;
public:
		void setB(int x,int y){ a = x;b = y;}
		void dispB(){cout<<a<<","<<b<<endl;}
};
class Derived: private Base //定义派生类
{
		int p;
protected:
		int q;
public:
		void setD(int x,int y)
		{
			a = x;   //错误！不可访问基类中的private成员
			b = y;   //基类中protected成员在派生类中变为private成员，可以访问
			setB(x,y); //基类中public成员在派生类中变为private成员，可以访问
			p = 2*x;
			q = 2*y;
		}
		void dispD()
		{
			dispB();   //基类中public成员在派生类中变为private成员，可以访问
			cout<<p<<","<<q<<endl;
		}
};
void main()
{
		Derived  dvar;
		dvar.a = 10;    //错误！不可直接访问
		dvar.b = 20;    //错误！不可直接访问
		dvar.setB(1,2); //错误！不可直接访问
		dvar.dispB();	//错误！不可直接访问
		dvar.setD (10,20);
		dvar.dispD ();
}
