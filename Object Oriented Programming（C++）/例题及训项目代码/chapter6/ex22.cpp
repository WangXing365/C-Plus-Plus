//【例6.22】友元类实例。
	#include "iostream.h"
	class Date;      				//前向引用声明，定义在后
	class Time
	{
	private:
		int hour,minute,sec;
	public:
		Time(){hour=0;minute=0;sec=0;}			//无参数构造函数
		Time(int h,int m,int s)					//重载构造函数
		{hour = h; minute = m; sec = s;} 
		void display(Date);   					//成员函数声明
	};
	class Date
	{ 
	private:
		int year,month,day;
	public:
		Date(){year=2013;month=1;day=1;} 		//无参数构造函数
		Date(int y,int m,int d)			  		//重载构造函数
		{year = y; month = m; day = d;} 
		friend Time;                    		//将Ｔime类声明为Ｄate类的友元类
	};
	void Time::display(Date d)  	 			     //定义Ｔime类的成员函数
	{
		cout<<d.year <<"/"<<d.month <<"/"<<d.day <<" ";//直接访问Ｄate类的私有数据
		cout<<hour<<":"<<minute<<":"<<sec<<endl;
	}
	void main()
	{
		Time t1(15,25,56);
		Date d1(2013,10,1);
		t1.display (d1);
	}
