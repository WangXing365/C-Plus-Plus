//【例6.15】定义一个"平面坐标点"类，测试拷贝构造函数的调用。
#include <iostream.h>
#include <string.h>
class Point 
{
	int x,y;      
public:
	Point(int a=0,int b=0)    //缺省构造函数
	{x = a; y = b;}
	Point(Point &p);          //拷贝构造函数原型声明
	~Point()                  //析构函数定义
	{	cout<<x<<","<<y;
	    cout<<"析构函数被执行！\n";
	 }
	void show();  
	int GetX(){return x;}
	int GetY(){return y;}
};
Point::Point(Point &p)		 //拷贝构造函数定义
{	
	x = p.x; y = p.y;
    cout<<x<<","<<y<<"拷贝构造函数被执行！\n";
}
void Point::show( )
{	
	cout<<"点："<<x<<","<<y<<"\n";
}
void main()
{
	Point p1(6,8),p2(4,7);
	Point p3(p1);            //注：A行
	Point p4=p2;             //注：B行
	p1.show();
	p3.show ();
	p2.show ();
	p4.show ();
}
