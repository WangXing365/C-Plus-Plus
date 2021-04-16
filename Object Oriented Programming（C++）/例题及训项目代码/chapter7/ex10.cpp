//【例7.10】 用"类名::"避免多义性示例2。
#include "iostream.h"
class Base1    //定义基类
{
	int a;
public:
	void seta(int x){ a = x;}
	void disp(){cout<<a<<endl;}
};
class Base2    //定义基类
{
	int b;
public:
	void setb(int x){ b = x;}
	void disp(){cout<<b<<endl;}
};
class Derived: public Base1,public Base2 //定义派生类
{
public:
    void print(){
		Base1::disp();  //A
		Base2::disp (); //B
	}
};
void main()
{	Derived d;
	d.seta(1);
//	d.disp();   //C，二义性
	d.setb(2);
//	d.disp();   //D，二义性
	d.print();
}
