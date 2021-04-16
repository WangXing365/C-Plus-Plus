//【例3.4】编程求解如下符号函数值。
//方法 1: 嵌套在else子句中，就变成了多分支结构
#include "iostream.h"
void main()
{   
	int x, y;
	cout<<"请输入x: ";
	cin>>x;
	if(x < 0)y = -1;
	else    if(x == 0)y = 0;
	else      y = 1;
	cout<<"x="<<x<<",y="<<y<<endl;
}
//方法 2: 嵌套在if子句中。
void main()
{
	int x, y;
	cout<<"请输入X: ";
	cin>>x;
	if(x != 0)  
	if (x < 0)y = 1;
	else      y = 1;
	else  y = 0;
	cout<< "x= "<<x<< ",y= "<<y<<endl;
}

