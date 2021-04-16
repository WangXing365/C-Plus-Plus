/*
1. 利用单分支if语句，判断输入的整数是否是3的倍数,但不是5的倍数。
*/
#include "iostream.h"
void main()
{   
	int x;
	cout<<"请输入x: ";
	cin>>x;
	if(x%3 == 0 && x%5 != 0)
		 cout<<x<<"是3的倍数,但不是5的倍数.\n";
}
