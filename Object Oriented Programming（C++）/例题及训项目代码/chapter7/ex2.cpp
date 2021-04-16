//【例7.2】公有继承示例。
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
class Derived: public Base //定义派生类
{
	int p;
protected:
	int q;
public:
	void setD(int x,int y)
	{
		a = x; //错误！不可访问基类中的private成员a
		b = y;  //正确，基类中protected成员b,在派生类中仍是protected成员 
		setB(x,y);//正确，基类中public成员在派生类中仍是public成员，可访问
		p = 2*x;
		q = 2*y;
	}
	void dispD()
	{
		dispB();//正确，基类中public成员在派生类中仍是public成员，可以访问
		cout<<p<<","<<q<<endl;
	}
};
void main()
{
	Derived  dvar;
	dvar.a = 10;    //错误！不可直接访问
	dvar.b =20;     //错误！不可直接访问
	dvar.setB(1,2); //正确，可以访问
	dvar.dispB();	//正确，可以访问
	dvar.setD (10,20);
	dvar.dispD ();
}
