/*
1．在例6.12基础上,4个重载构造函数，即无参数、1至3个参数的构造函数。
*/
#include "iostream.h"
class MyDate
{
	int Year,Month,Day;
public:
	MyDate()					//重载构造函数1，在体内定义
	{
		Year=2014; Month=10; Day=1;
	}
	MyDate(int y);				//重载构造函数2,在体内声明	
	MyDate(int y,int m);		//重载构造函数3,在体内声明	
	MyDate(int y,int m,int d);  //重载构造函数4,在体内声明	
	void ShowDate();            //一般成员函数的声明
};
MyDate::MyDate(int y)			//重载构造函数2，在体外定义（即体外实现）
{
	Year=y; Month=11;Day=2;
}
MyDate::MyDate(int y,int m)		//重载构造函数3，在体外定义（即体外实现）
{
	Year=y; Month=m;Day=3;
}
MyDate::MyDate(int y,int m,int d)//重载构造函数4，在体外定义（即体外实现）
{
	Year=y; Month=m;Day=d;
}
void MyDate::ShowDate()         //一般成员函数在体外实现
{
	cout<<Year<<"年"<<Month<<"月"<<Day<<"日"<<endl;
}

/*2．利用构造函数重载定义一个关于圆的类，编制求圆的周长和面积的程序。
   并举例定义圆对象，求出它们的周长和面积。
*/
class  CCircle
{
private:            		   
	float  radius;  	  
public:                       
	CCircle(){ radius = 0;}
	CCircle(float r){radius = r;}
	void set(float r){radius = r;}
	float peri()			   //定义成员函数peri()
	{
		return (2*3.14F*radius);
	}
	float area()			  //定义成员函数area()
	{
		return (3.14F*radius*radius);
	}
};

void main()
{   
	MyDate  d1;				//自动调用构造函数1
	MyDate  d2(2015);			//自动调用构造函数2
	MyDate  d3(2016,11);		//自动调用构造函数2
	MyDate  d4(2017,12,3);		//自动调用构造函数2
	d1.ShowDate ();
	d2.ShowDate ();
	d3.ShowDate ();
	d4.ShowDate ();

	CCircle  p1;
	CCircle  p2(1.0);
	cout<<"周长="<<p1.peri ()<<",面积="<<p1.area ()<<endl;
	cout<<"周长="<<p2.peri ()<<",面积="<<p2.area ()<<endl;
}


