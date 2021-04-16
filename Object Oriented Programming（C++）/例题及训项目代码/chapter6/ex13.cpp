//【例6.13】带认参数值的构造函数。
#include "iostream.h"
class MyDate
{
	int Year,Month,Day;
public:
	MyDate(int y=2013,int m=7,int d=1)//带参数缺省值的构造函数
	{
		Year=y;Month=m;Day=d;
	}
	void ShowDate()
	{
		cout<<Year<<"年"<<Month<<"月"<<Day<<"日"<<endl;
	}
};
void main()
{   
	MyDate  d1; 
   	MyDate  d2(2014);         //等同于 MyDate  d2(2014,7,1);
	MyDate  d3(2014,9);	   //等同于 MyDate  d2(2014,9,1);
	MyDate  d4(2014,12,3); 	   //默认参数失效
	d1.ShowDate ();
	d2.ShowDate ();
	d3.ShowDate ();
	d4.ShowDate ();
}

