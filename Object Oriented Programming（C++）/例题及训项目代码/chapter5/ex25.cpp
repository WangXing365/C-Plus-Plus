//【例5.25】 从键盘输入两个整数，并把其中较大的值显示出来，要求用宏定义编程。
#include  "iostream.h"
#define  MAX(a,b)  ((a) > (b) ? (a) : (b))
void main()
{	
	int x,y,z;
	cout<<"请输入两个整数：";
	cin>>x>>y;
	z= MAX(x,y);
	cout<<"Max="<<z<<endl;
}
