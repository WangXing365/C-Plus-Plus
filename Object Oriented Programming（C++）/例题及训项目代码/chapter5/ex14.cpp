//【例5.14】 引用的定义
#include <iostream.h>
void main()
{
	int x;
	int &y = x;        //引用y是变量x的别名
	x = 20;
	cout<<y<<",";      //y也是20
	y += 10;           //y变为30,x也是30
	cout<<x<<endl;     //输出30
}

