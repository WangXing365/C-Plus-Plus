/*
 *P93模仿联系第三题
 *将键盘输入的两个整数分别存入变量x，y中，再按由小到大的顺序输出 
 */
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int *min,*max;
	cout<<"请输入两个整数x，y:";
	cin>>x>>y; 
	if(x>y)
	{
	min=&y;
	max=&x;
	}else {
	min=&x;
	max=&y;
	}
	cout<<*min<<","<<*max;
}
