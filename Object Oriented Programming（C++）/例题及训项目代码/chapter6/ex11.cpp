//【例6.11】 设计一个日期类，具有设置和显示日期的成员函数。
#include "iostream.h" 
class  MyDate
{
private:
	int Year, Month, Day;
public:
	void SetDate(int y,int m,int d); //成员函数
	void Display();                  //成员函数
};
void MyDate::SetDate(int y,int m,int d)//成员函数实现
{
	Year  = y; //设置年份
	Month = m; //设置月份
	Day   = d; //设置日
}
void MyDate::Display()
{
	cout<<"日期为：";       //显示"日期为："
	cout<<Year<<"年"; 		//空几格后，显示年份
	cout<<Month<<"月";      //显示月份
	cout<<Day<<"日"<<endl;  //显示日，回车
}
void main( )
{
    MyDate  a;             //定义一个日期对象a
	a.SetDate(2013,9,1);   //调用成员函数SetDate()设置日期
	a.Display();           //调用成员函数Display()显示日期
}
