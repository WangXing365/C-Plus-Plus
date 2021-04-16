//3．编写一个日期类，实现日期的加天数、减天数和输出操作（2月固定为28天）。
#include "iostream.h"
class Date
{
	int year,month,day;
public:
	Date(int y=0,int m=0,int d=0);//构造函数
	void ShowDate();
	Date operator ++();		   //前置单目运算符重载
	Date operator ++(int);     //后置单目运算符重载
};
Date::Date(int y,int m,int d)
{
	year=y; month=m; day=d;
}
void Date::ShowDate()
{	cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl; }

Date Date::operator ++()	    //前置单目运算符重载
{
	day++;
	switch(month)
	{
		case 2:
			if(day>28){ day = 1;month++;}
			break;
		case 1:  case 3:  case 5:  case 7:  case 8: case 10: case 12:
			if(day>31){ day = 1;month++;}
			break;
		case 4:  case 6:  case 9:  case 11: 
			if(day>30){ day = 1;month++;}
			break;
	}
	if(month>12){month=1;year++;}
	return *this;
}
Date Date::operator ++(int)	   //前置单目运算符重载
{
	Date t = *this;
	day++;
	switch(month)
	{
		case 2:
			if(day>28){ day = 1;month++;}
			break;
		case 1:  case 3:  case 5:  case 7:  case 8: case 10: case 12:
			if(day>31){ day = 1;month++;}
			break;
		case 4:  case 6:  case 9:  case 11: 
			if(day>30){ day = 1;month++;}
			break;
	}
	if(month>12){month=1;year++;}
	return t;
}
void main()
{
	Date t1(2014,12,30),t2;
	cout<<"第一日期(t1): ";
	t1.ShowDate();
	cout<<"t2= ++t1:\n";
	t2 = ++t1;
	cout<<"t1: ";
	t1.ShowDate();
	cout<<"t2: ";
	t2.ShowDate();
	cout<<"第二日期(t1): ";
	t1.ShowDate();
	cout<<"t2= t1++:\n";
	t2 = t1++;
	cout<<"t1: ";
	t1.ShowDate();
	cout<<"t2: ";
	t2.ShowDate();
}
