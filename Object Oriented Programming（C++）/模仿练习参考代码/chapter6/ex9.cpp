/*
设计一个商品库存盘点程序。建立一个商品类（Commodity），包含单价（Price）和总价（TotalPrice）数据成员。
其中TotalPrice为静态成员。成员函数包括构造函数和析构函数，以及静态成员函数库存盘点（CheckStock）。
*/
#include <iostream.h>
#include <string.h>
class  Commodity
{
	double  Price;				//单价
	char   CName[16];			//商品名称
	double total;				//数量
	static double TotalPrice; 	//总价
public:
	Commodity(char n[],double num,double p)//构造函数
	{
		strcpy(CName,n);
		total = num; 
	    Price = p;
		TotalPrice += (Price*total);
	}
	~Commodity(){}
	static void CheckStock()// 静态成员函数
	{ 
		cout<<"库存商品总价="<<TotalPrice<<"\n"; 
	}
};
double Commodity::TotalPrice=0;//静态数据成员的初始化

void main()
{
	Commodity  s1("黄豆",8.95,3.5); 	//创建第一个商品对象
	Commodity  s2("花生",1.5,13.5); 	//创建第二个商品对象
	Commodity  s3("土豆",18.95,2.5); 	//创建第三个商品对象
	cout<<"输出结果"<<endl;
	Commodity::CheckStock();
}
