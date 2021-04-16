#include "iostream.h"
#include "math.h"

class Point
{
private:
	double x,y;
public:
	Point()
	{}
	Point(double x,double y)
	{
		this->x = x;
		this->y = y;
	}
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	friend double dist(Point,Point);  //友元函数声明
};

double dist(Point p1,Point p2)
{
	double d,d1,d2;
	d1 = p2.x - p1.x;
	d2 = p2.y - p1.y;
	d  = sqrt(d1*d1+d2*d2);
	return d;
}
void main()
{
	Point p1(3,5),p2(4,6);
	cout<<"两点之间的距离："<<dist(p1,p2)<<endl;


}

