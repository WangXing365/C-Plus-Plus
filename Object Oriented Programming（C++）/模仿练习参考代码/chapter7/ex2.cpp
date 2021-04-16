/*
已知：时间类CTime仅有数据属性"年、月、日、时、分、秒"；
本国时间类CCountrytime除拥有时间类CTime的各个属性外，还有自己的数据属性"国家、格林尼治时差"。
请用继承结构解决中、日两国的时间差计算。
*/
#include "iostream.h"
#include "string.h"
class CTime
{
	int year,month,day;
	int hour,minute,second;
public:
	CTime(int y,int m,int d,int h,int mi,int s)
	{
		year=y;month=m;day=d;
		hour=h;minute=mi;second=s;
	}
};
class CCountrytime: public CTime
{
	char coutry[14];;

public:
	int  TimeDif;
	CCountrytime(char c[],int t,int y,int m,int d,int h,int mi,int s): CTime( y,m,d,h,mi,s)
	{
		strcpy(coutry,c);
		TimeDif = t;
	}
};

void main()
{
	CCountrytime china("中国",8,2014,6,1,12,1,1);
	CCountrytime jupan("日本",9,2014,6,1,12,1,1);
	int dif = jupan.TimeDif - china.TimeDif ;
	cout<<"中、日两国的时间差="<<dif<<endl;
}
