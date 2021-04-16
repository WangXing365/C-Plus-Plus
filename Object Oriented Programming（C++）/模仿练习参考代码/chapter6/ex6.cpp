/*
定义一个三维坐标系下的线段类Line，数据成员包括两个端点坐标。成员函数包括：
  (1)设置第一个端点的坐标；(2) 设置第二个端点的坐标；
  (3)求线段的长度；(4)取出第一个端点的坐标，参数为三个指针，分别指向一个端点的坐标x,y,z；
  (5) 取出第二个端点的坐标，参数为另一个端点的x,y,z坐标变量的引用；
  (6) 输出两端点的坐标以及线段长度。在主函数中定义一个线段类的对象，然后对所有成员进行测试。
*/
#include "iostream.h"
#include "math.h"
class Point
{
public:
	int x,y,z;
};
class Line
{
public:
	Point Pl,Pr;
	void SetLPoint(int a,int b,int c)
	{     
		Pl.x = a;Pl.y = b;Pl.z = c;
	}
	void SetRPoint(int a,int b,int c)
	{     
		Pr.x = a;Pr.y = b;Pr.z = c;
	}
	float LineLength()
	{
		float L;
		L  = (Pl.x-Pr.x)*(Pl.x-Pr.x); 
		L += (Pl.y-Pr.y)*(Pl.y-Pr.y);
		L += (Pl.z-Pr.z)*(Pl.z-Pr.z);
		L = sqrt(L);
		return L;
	}
	void GetLPoint(int *x,int *y,int *z)
	{
		*x=Pl.x; *y=Pl.y; *z=Pl.z;
	}
	void GetRPoint(int &x,int &y,int &z)
	{
		x=Pr.x; y=Pr.y; z=Pr.z;
	}
	void Display()
	{
		cout<<"Left Point:("<<Pl.x<<","<<Pl.y<<","<<Pl.z<<")"<<endl;
		cout<<"Right Point:("<<Pr.x<<","<<Pr.y<<","<<Pr.z<<")"<<endl;
		cout<<"The length of Line is "<<LineLength()<<endl;
	}
};

void main()
{
	Line  p;
	p.SetLPoint (1,2,3);
	p.SetRPoint (4,5,6);
	p.Display ();
	int x,y,z;
	p.GetLPoint(&x,&y,&z);
	cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
    p.GetRPoint(x,y,z);
	cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
}