//【例2.6】 分析以下程序的运行结果。
#include <iostream.h>
void main()
{
	int  x1 = 1,x2 = 1, y1,y2;
	y1 = ++x1;    		          //使用x1之前先自身加1,等价x1=x1+1;y1=x1;
	y2 = x2++;     		          //使用x2之后再自身加1,等价y2=x2;x2=x2+1;
	cout<<" x1 = "<<x1<<", y1 = "<<y1<<endl;
	cout<<" x2 = "<<x2<<", y2 = "<<y2<<endl;
}

