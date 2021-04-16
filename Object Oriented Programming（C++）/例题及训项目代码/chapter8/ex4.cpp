//【例8.4】 分析以下程序的执行结果。
#include <iostream.h>
#include <math.h>
const double PI = 3.14;
class Shape                        //定义一个图形类 
{
public:
    virtual double Area () =0;     //定义求面积的纯虚函数
    virtual void shapedisp()=0 ;   //定义输出图形名称的纯虚函数
};
class Circle: public Shape 
{
private:
	double r;
public:
	Circle(){}
	Circle(double rr){ r = rr;}
	virtual double Area(){ return PI*r*r; }     //在派生类中实现求面积的功能
    virtual void shapedisp(){cout<<"它是一个圆";}//在派生类中实现输出图形名
};
class Cube: public Shape 
{
private:
	double x,y,h;
public:
	Cube(){}
	Cube(double xx,double yy,double hh){ x = xx;y=yy;h=hh;}
	virtual double Area()
	{ return 2*(x*y+x*h+y*h); }	//在派生类中实现求面积的功能
    virtual void shapedisp()
	{cout<<"它是一个立方体";}	//在派生类中实现输出图形名
};
void main( )
{
	Shape *ptr;
	Circle c(5);
	Cube   m(1,2,3);
	ptr = &c;
	ptr->shapedisp();
    cout<<", 面积 = "<<ptr->Area()<<endl;
	ptr = &m;
	ptr->shapedisp();
	cout<<", 面积 = "<<ptr->Area()<<endl;
}
