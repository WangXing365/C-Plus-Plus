//【例6.10】建立一个main()函数，在函数体中使用Rect类实例化一个对象。
#include "iostream.h"
class  Rect                   //类名是Rect
{
private:            		   //私有数据成员：length,width 
	float  length,width;  	   //长和宽
public:                        //公有函数声明：set(),peri(),area()
	void set(float a, float b);//设置长和宽
	float peri();			   //求周长函数
	float area();			   //求面积函数
};
void Rect::set(float x,float y)//定义成员函数set()
{
	length= x;                 //访问私有属性的数据成员length
	width = y;			   //访问私有属性的数据成员width
}	
float Rect::peri()			   //定义成员函数peri()
{
	return (length+width)*2;   
}
float Rect::area()			  //定义成员函数area()
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
