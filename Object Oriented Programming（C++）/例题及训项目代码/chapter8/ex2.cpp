//【例8.2】 修改例8-1，将计算面积的成员函数Area()定义为虚函数，以实现动态联编。
#include "iostream.h"
class Point
{
protected:
	double x,y;                             //点的坐标
public:
	Point(double a=0,double b=0){x=a;y=b;}
	virtual	double Area()					//虚函数1
	{ cout<<"调用 Point基类的Area()函数, 面积= ";
	  return 0.0;
	}   
};
class Rectangle: public Point
{
protected:
	double x1,y1;
public:
	Rectangle(double a=0,double b=0,double c=0,double d=0):Point(a,b)
	{x1=c;y1=d;}
	virtual double Area()				    //虚函数2
	{   cout<<"调用Rectangle类的Area()函数,面积= ";
		return (x-x1)*(y-y1);
	} 
};
class Circle: public Point
{
protected:
	double r;                              //圆半经，基类中x,y为圆心坐标
public:
	Circle(double a=0,double b=0,double c=0):Point(a,b)
	{r=c;}
	virtual double Area()				   //虚函数3
	{   cout<<"调用 Circle 类的 Area()函数,面积= ";
		return 3.14*r*r;
	}  
};
double CalcArea(Point &p)
{
	return p.Area();                       //A,运行时才确定调用那个虚函数
}
void main()
{
	Point p(1,2);
	Rectangle r(0,0,1,1);
	Circle c(0,0,1);
	double s;
	s = CalcArea(p);						 //计算点的面积
	cout<<s<<endl;
	s = CalcArea(r);						 //计算长方形面积
	cout<<s<<endl;
	s = CalcArea(c);						 //计算园面积
	cout<<s<<endl;
} 
