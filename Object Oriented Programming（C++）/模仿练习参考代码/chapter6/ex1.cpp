/*
1．定义一个类CBox，该类的数据成员有：长、宽、高；成员函数有：
   体积计算、尺寸大小改变和尺寸信息的显示。
*/
#include "iostream.h"
#include "string.h"
class  CBox                    //类名是CBox
{
private:            		   //私有数据成员：length,width,hight 
	float  length,width,hight; 
public:                        //公有函数声明：set(),peri(),area()
	void set(float a, float b,float c);//设置长、宽、高
	float Volue();			   //求体积函数
	void  Display();		   //尺寸信息的显示函数
};
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

/*2．定义一个类CName，含有私有数据成员name（字符串），两个成员函数SetName（）、DisName()，
   分别用于从键盘上输入姓名和在屏幕上显示姓名。
*/
class CName                    //类名是CName
{
private:            		 
	char name[16]; 
public:                      
	void SetName();    
	void  Display();		   
};

void CName::SetName()
{
	cout<<"请输入姓名：";
	cin>>name;
}	

void CName::Display()			  
{
	cout<<"name="<<name<<endl;
}
