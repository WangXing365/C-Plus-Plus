#include "iostream.h"
class Date;
class Time
{
private:
	int hour,minute,sec;
public:
	Time(){hour=0;minute=0;sec=0;}
	Time(int h,int m,int s){hour=h;minute=m;sec=s;}
	void display(Date);   //成员函数
};

class Date
{ 
private:
	int year,month,day;
public:
	Date(){year=2013;month=1;day=1;}
	Date(int y,int m,int d){year=y;month=m;day=d;}
	friend Time;
};
void Time::display(Date d)  //成员函数
{
	cout<<d.year <<"/"<<d.month <<"/"<<d.day <<" ";
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

void main()
{
	Time t1(15,25,56);
	Date d1(2013,10,1);
	t1.display (d1);
}
