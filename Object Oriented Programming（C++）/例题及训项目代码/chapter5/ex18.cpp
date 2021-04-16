//【例5.18】 圆面积、三角形面积和梯形的面积，根据参数个数的不同调用不同的fnArea()函数。
#include "iostream.h"
float fnArea(float r)             	//含1个参数的重载函数fnArea()
{
    return (r * r * 3.14f);
}
float fnArea(float a,float h)    	//含2个参数的重载函数fnArea()
{
   	return (a * h * 0.5f);
}
float fnArea(float a,float b,float h) //含3个参数的重载函数fnArea()
{
	return ((a+b) * h * 0.5f);
}
void main( )
{
    float r = 1.5f;
    float a = 2.0f, b = 2.5f, h = 1.2f;
	cout<<"圆面积    ="<<fnArea(r)<<endl;     //调用第1个fnArea()函数
	cout<<"梯形面积  ="<<fnArea(a,b,h)<<endl; //调用第3个fnArea()函数
	cout<<"三角形面积="<<fnArea(a,h)<<endl;   //调用第2个fnArea()函数
}
