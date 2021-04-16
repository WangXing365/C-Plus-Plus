/*
定义一个点类（Point）、矩形类（Rectangle）和立方体类（Cube）的层次结构。
矩形包括长度和宽度两个新数据成员，矩形的位置由点类继承。立方体类由长、宽和高度构成。
要求各类提供支持初始化的构造函数和显示自己成员的成员函数。
编写主函数，测试这个层次结构，输出立方体的相关信息。
*/
#include <iostream.h>
class  Point							//定义基类Point
{
    int x,y;
public:
   	Point (int a,int b )  
	{	x=a;y=b;} 
	void dispP()
	{
		cout<<"起点("<<x<<","<<y<<") ";
	}
};
class Rectangle: public Point            //定义Rectangle类
{
	int length,width;
public:
   	Rectangle(int l,int w,int x,int y ):Point(x,y)  
	{ 
		length=l;
		width=w;
	}
	void dispR( )
	{   dispP();
		cout <<",长="<<length<<",宽="<<width;
	}
};

class Cube: public  Rectangle
{ 
		int hight;
public:
	Cube(int h,int l,int w,int x,int y): Rectangle(l,w,x,y)     //包含基类成员初始化列表
    {
		hight = h; 
	}
	void dispC( )
	{
		dispR( );
		cout << ",高="<<hight<<endl;
	}
};
void main( )
{
   	Cube  obj (1,2,3,10,12);
   	obj.dispC();      
}
