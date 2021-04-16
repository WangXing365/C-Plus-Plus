//【例6.20】 求点p(x,y)到直线L（ax+by+c=0）的距离。 
	#include "iostream.h"
	#include "math.h"
	class Line;      //前向引用声明，定义在后面
	class Point
	{
	private:
		double x,y;
	public:
		Point(double x,double y)
		{
			this->x = x;
			this->y = y;
		}
		friend double dist(Point,Line);  //友元函数声明
	};
	class Line
	{
	private:
		double a,b,c;
	public:
		Line(double a,double b,double c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		friend double dist(Point,Line);  //友元函数声明
	};
	double dist(Point p1,Line p2)
	{
		double d,d1,d2;
		d1 = p2.a*p1.x +p2.b*p1.y+p2.c ;
		d2 = sqrt(p2.a*p2.a+p2.b *p2.b);
		d  = fabs(d1/d2);
		return d;
	}
	void main()
	{
		Point p1(4,5);
		Line p2(1,2,5);
		cout<<"点到直线的距离："<<dist(p1,p2)<<endl;
	}
