//【例8.12】用友元函数重载运算符++。
#include <iostream.h>
class CPoint
{
	long x,y;
public:
	CPoint(){x=0L;y=0L;}
	CPoint(long x1,long y1)
	{ x=x1;y=y1; }
	void display()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
	friend CPoint operator++(CPoint &);	   //前缀自增
	friend CPoint operator++(CPoint &,int); //后缀自增
};

CPoint operator++(CPoint &e)		//前缀自增
{
	return CPoint(++e.x,++e.y);
}

CPoint operator++(CPoint &e,int) //后缀自增	
{
	return CPoint(e.x++,e.y++);
}
void main()
{
	CPoint p1(10,10),p2;
	p2 = p1++;
	p1.display();
	p2.display();
	p2 = ++p1;
	p1.display();
	p2.display();
}
