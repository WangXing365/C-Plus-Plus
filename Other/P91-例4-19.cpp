/* 
 *P91例题 例4-19
 *从键盘中输入两个数，利用指针方法将这两个数输出
 */ 
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int *px,*py;
	px=&x;
	py=&y;
	cout<<"请输入x，y：";
	cin>>x>>y;
	cout<<"x="<<*px<<",y="<<*py<<endl; 
}
