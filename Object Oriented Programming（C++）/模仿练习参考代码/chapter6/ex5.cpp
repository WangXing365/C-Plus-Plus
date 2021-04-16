/*
利用（§6.15节模仿练习中定义）类CBox定义对象，调用成员函数，熟悉对象成员的使用方法。
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
	cout<<"长="<<length<<"、宽="<<width<<"、高="<<hight;
	cout<<" 体积="<<Volue()<<endl;
}
void main()
{
	CBox  a;
	a.set (2);
	a.Display ();
	a.set (2,3);
	a.Display ();
	a.set (2,3,4);
	a.Display ();
}