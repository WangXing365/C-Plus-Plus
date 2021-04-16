//【例8.3】 将计算面积的成员函数Area()定义为虚函数，以实现动态联编。
#include "iostream.h"
const double PI = 3.14;
class Circle
{
protected:
	double r;                              //圆的半经
public:
	Circle(){ }
	Circle(double rr){ r = rr;}
	virtual double Area()				 //基类中的虚函数
	{ cout<<"调用 Circle基类的Area()函数,";
	  return PI*r*r;
	} 
	virtual void display()			//基类中的虚函数
	{
		cout<<"圆的半经为："<<r<<endl;
	}
};
class Globe: public Circle
{
protected:
	double x1,y1;
public:
	Globe(double rr):Circle(rr){}
	virtual double Area()		    //派生类中的虚函数与基类中的虚函数有不同的实现
	{   cout<<"调用Globe类的Area()函数,";
		return 4*PI*r*r;
	} 
	virtual void display()		   //派生类中的虚函数与基类中的虚函数有不同的实现
	{
		cout<<"球的半经为："<<r<<endl;
	}
};
class Cylinder: public Circle
{
protected:
	double h;                     //圆柱高
public:
	Cylinder(){}
	Cylinder(double rr,double hh):Circle(rr)
	{h=hh;}
	virtual double Area()		   //派生类中的虚函数与基类中的虚函数有不同的实现
	{   cout<<"调用 Circle 类的 Area()函数,";
		return 3*PI*r*r+2*PI*r*h;
	}
	virtual void display()		   //派生类中的虚函数与基类中的虚函数有不同的实现
	{
		cout<<"圆柱体的底面半经为："<<r<<",高为："<<h<<endl;
	}
};
void  fun(Circle &c)
{
	 c.display();                          //A,运行时才确定调用那个虚函数
}
void main()
{
	Circle cir(2),*p;
	Globe glo(3);
	Cylinder cyl(4,2);
	cout<<"通过对象来调用相应的虚函数："<<endl;     //不会实现多态
	cir.display();
	cout<<"圆的面积："<<cir.Area ()<<endl;
	glo.display();
	cout<<"球的面积："<<glo.Area ()<<endl;
	cyl.display();
	cout<<"圆柱体的面积："<<cyl.Area ()<<endl;
	cout<<"\n通过引用和指针来调用相应的虚函数："<<endl; //实现多态
	fun(cir);
	p = &cir;
	cout<<"圆的面积："<<p->Area ()<<endl;
	fun(glo);
	p = &glo;
	cout<<"球的面积："<<p->Area ()<<endl;
	fun(cyl);
	p = &cyl;
	cout<<"圆柱体的面积："<<p->Area ()<<endl;
}
