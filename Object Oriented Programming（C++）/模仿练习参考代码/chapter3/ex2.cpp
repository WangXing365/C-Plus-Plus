//2. 编写一个双分支结构程序，从键盘输入两个整数，求其中较大数并输出。
#include "iostream.h"
void main()
{   
	int x,y,max;
	cout<<"请输入x,y: ";
	cin>>x>>y;
	if(x>y)max=x;
	else   max=y;
    cout<<"较大数="<<max<<endl;
}
