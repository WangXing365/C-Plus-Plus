//【例3.1】 编写一个单分支结构程序，用于显示用户输入数据的绝对值。
#include "iostream.h"
void main()
{ 
	float  x, y;
	cout<<"请输入x：";
	cin>>x;
	y = x;
	if (x<0)y = -x;
    cout<<" y =|"<<x<<"|="<<y<<endl;
}

