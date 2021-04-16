//【例6.12】 定义日期类，利用构造函数初始化数据成员。
#include "iostream.h"
class MyDate
{
	int Year,Month,Day;
public:
	MyDate(int y)				//重载构造函数1，在体内定义
	{
		Year=y; Month=10; Day=1;
	}
	MyDate(int y,int m,int d);  //重载构造函数2,在体内声明	
	void ShowDate();            //一般成员函数的声明
};
MyDate::MyDate(int y,int m,int d)//重载构造函数2，在体外定义（即体外实现）
{
	Year=y; Month=m;Day=d;
}
void MyDate::ShowDate()         //一般成员函数在体外实现
{
	cout<<Year<<"年"<<Month<<"月"<<Day<<"日"<<endl;
}
void main()
{   
	MyDate  d1(2013);		  //自动调用构造函数1
	MyDate  d2(2014,12,3);	  //自动调用构造函数2
	d1.ShowDate ();
	d2.ShowDate ();
}
