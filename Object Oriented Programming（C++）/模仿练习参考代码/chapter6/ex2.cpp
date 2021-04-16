/*
	定义一个类CBox，该类的数据成员有：长、宽、高；
	成员函数有：体积计算、尺寸大小设置和尺寸信息的显示。
	其中尺寸大小设置定义函数重载，立方体时用一个参数，
	底面是正方形时用二个参数，长方体时用三个参数。
*/
#include "iostream.h"
class  CBox                    //类名是CBox
{
private:            		   //私有数据成员：length,width,hight 
	float  length,width,hight; 
public:                        //公有函数声明：set(),peri(),area()
	void set(float a);
	void set(float a, float b);
	void set(float a, float b,float c);
	float Volue();			   //求体积函数
	void  Display();		   //尺寸信息的显示函数
};
void CBox::set(float x)//定义成员函数set()
{
	length= x;                
	width = x;			      
	hight = x;
}
void CBox::set(float x,float y)//定义成员函数set()
{
	length= x;                
	width = x;			      
	hight = y;
}
void CBox::set(float x,float y,float z)//定义成员函数set()
{
	length= x;                
	width = y;			      
	hight = z;
}	
float CBox::Volue()			   
{
	return (length*width*hight);   
}
void CBox::Display()			  
{
	cout<<"长="<<length<<"、宽="<<width<<"、高="<<hight<<endl;
}