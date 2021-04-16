/*
某市不同车牌的出租车3公里的起步价和 计费分别为：
夏利7元，3公里以外，2.1元/公里；富康8元，3公里以外，2.4元/公里；
桑塔那9元，3公里以外，2.7元/公里。
编程：从键盘输入乘车的车型及行车公里数，输出应付车费。
*/
#include "iostream.h"
void main()
{	
	int car;
	double money,distance=0;
	cout<<"请输入出租车类型（1：夏利，2：富康，3：桑塔那）：";
	cin>>car;
	cout<<"请输入行车公里数：";
	cin>>distance;
	switch(car)
	{
		case 1:  money = 7.0+2.1*(distance-3);break;
		case 2:  money = 8.0+2.4*(distance-3);break;
		case 3:  money = 9.0+2.7*(distance-3);break;
		default: cout<<"车型输入有误."<<endl;break;
	}
	cout<<"应付车费:"<<money<<"\n";
}
