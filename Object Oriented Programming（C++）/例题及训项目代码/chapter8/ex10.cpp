//【例8.10】时钟类单目运算符++重载为成员函数形式。
//时钟类,包含数据成员时（Hour）、分(Minute)、秒(Second),模拟分、秒表，进制是60,而时钟则是为24进制。
#include "iostream.h"
class Clock
{
	int Hour,Minute,Second;
public:
	Clock(int h=0,int m=0,int s=0);//构造函数
	void ShowTime();
	Clock operator ++();		   //前置单目运算符重载
	Clock operator ++(int);        //后置单目运算符重载
};
Clock::Clock(int h,int m,int s)
{
	Hour=h; 	Minute=m; Second=s;
}
void Clock::ShowTime()
{	cout<<Hour<<":"<<Minute<<":"<<Second<<endl; }
Clock Clock::operator ++()	        //前置单目运算符重载
{
	Second++;
	if(Second>=60)
	{	Second -= 60;
		Minute++;
		if(Minute>=60)
		{   	Minute -= 60; Hour++;
			if(Hour>=24)Hour -= 24;
		}
	}
	return *this;
}
Clock Clock::operator ++(int)	   //前置单目运算符重载
{
	Clock t = *this;
	Second++;
	if(Second>=60)
	{	Second -= 60; Minute++;
		if(Minute>=60)
		{	Minute -= 60;	Hour++;
			if(Hour>=24)Hour -= 24;
		}
	}
	return t;
}
void main()
{
	Clock t1(23,59,59),t2;
	cout<<"第一时间(t1): ";
	t1.ShowTime ();
	cout<<"t2= ++t1:\n";
	t2 = ++t1;
	cout<<"t1: ";
	t1.ShowTime ();
	cout<<"t2: ";
	t2.ShowTime ();
	cout<<"第二时间(t1): ";
	t1.ShowTime ();
	cout<<"t2= t1++:\n";
	t2 = t1++;
	cout<<"t1: ";
	t1.ShowTime ();
	cout<<"t2: ";
	t2.ShowTime ();
}
