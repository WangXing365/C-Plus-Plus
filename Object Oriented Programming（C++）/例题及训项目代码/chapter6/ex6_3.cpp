#include "iostream.h"
class  Rect
{
private:            		 //私有数据成员：x, y
float  length,width;  		 //长和宽
public:                    //公有函数声明：set(),peri(),area()
void set(float a, float b);	 //设置长和宽
float peri();			 //求周长函数
float area();			 //求面积函数
};
void Rect::set(float x,float y)
{
	length= x;
	width = y;
}

float Rect::peri()
{
	return (length+width)*2;
}

float Rect::area()
{
	return (length*width);
}
void main()
{
	Rect  k,*p;
	p = &k;
	p->set (3.5F,2.0F);
	cout<<"周长="<<p->peri() <<",面积="<<p->area() <<endl;
}