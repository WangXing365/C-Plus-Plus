//【例8.1】以下是一个静态联编的例子，分析程序的执行结果。
#include "iostream.h"
class Point
{
protected:
	double x,y;						    //点的坐标
public:
	Point(double a=0,double b=0){x=a;y=b;}
	double Area()							//函数1
	{  cout<<"调用 Point基类的Area()函数, 面积= ";
	   return 0.0;
	} 
};
class Rectangle: public Point
{
protected:
	double x1,y1;             //长方形右下角点的坐标，基类中x,y为左上角坐标
public:
	Rectangle(double a=0,double b=0,double c=0,double d=0):Point(a,b)
	{x1=c;y1=d;}
	double Area()				           //函数2
	{   cout<<"调用Rectangle类的Area()函数,面积= ";
		return (x-x1)*(y-y1);
	} 
};
class Circle: public Point
{
protected:
	double r;                               //圆半经，基类中x,y为圆心坐标
public:
	Circle(double a=0,double b=0,double c=0):Point(a,b)
	{r=c;}
	double Area()				           //函数3
	{   cout<<"调用 Circle 类的 Area()函数,面积= ";
		return 3.14*r*r;
	} 
};
double CalcArea(Point &p)
{
	return p.Area();						//A  编译连接时确定调用函数1
}
void main()
{
	Point p(1,2);
	Rectangle r(0,0,1,1);
	Circle c(0,0,1);
	double s;
	s = CalcArea(p);
	cout<<s<<endl;
	s = CalcArea(r);
	cout<<s<<endl;
	s = CalcArea(c);
	cout<<s<<endl;
} 
