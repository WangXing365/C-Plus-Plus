/*
  模仿练习	
1. 编写一个多分支结构程序，用户输入3个整数，求其中较小数并输出。
*/
#include "iostream.h"
void main()
{   
	int x,y,z,min;
	cout<<"请输入x,y,z: ";
	cin>>x>>y>>z;
	if(x<y && x<z)min=x;
	else  if(x>y && y<z)min=y;
	      else  min=z;
    cout<<"较小数="<<min<<endl;
}