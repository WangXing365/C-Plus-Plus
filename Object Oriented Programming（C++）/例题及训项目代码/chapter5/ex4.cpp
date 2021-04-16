//【例5.4】由键盘输入两个整数，求其中较大数并输出。
#include "iostream.h"
int fnMax(int  x,int y)  //函数定义
{
	int  max;
	if(x>=y)max = x;
	else    max = y;
	return max;
}
void  main()
{
	int  x,y,z;
	cout<<"请输入两个整数：";
	cin>>x>>y;
	z = fnMax(x,y); //函数调用
	cout<<"较大数是："<<z<<endl;
}

