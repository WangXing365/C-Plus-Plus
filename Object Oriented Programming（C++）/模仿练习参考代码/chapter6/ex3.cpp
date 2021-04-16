/*
设计一个描述时间的类，设置函数带默认参数。（缺省时间是2013年10月1日）
*/
class  MyDate
{
private:
	int Year;
	int Month;
	int Day;
public:
	void Set(int y=2013,int m=10,int d=1); //成员函数声明
	void Display();              //成员函数声明
};

void MyDate::Set(int y,int m,int d)
{
	Year = y; 					//设置年
	Month= m;						//设置月
	Day  = d;       				//设置日
}
void MyDate::Display()
{
	cout<<"日期为："<<endl; 		//显示"日期为："，回车
	cout<<"\t"<<Year<<"年";          //空几格后，显示年份
	cout<<Month<<"月"；		     //显示月份
	cout<<Day<<"日"<<endl;		     //显示日，回车
}

