/*
2. 编一个程序，输入x值，输出y值。其中x与y的函数关系如下：
        3x^2-2x+9       ( x ≥ 10  )
y =      4x+5          ( 10>x≥0  )
        x^3-7x          (  x < 0   )
*/
#include "iostream.h"
void main()
{   
	int x,y;
	cout<<"请输入x: ";
	cin>>x;
	if(x>=10)y=3*x*x-2*x+9;
	else  if(x>=0 && x<10)y=4*x+5;
	      else  y=x*x*x-7*x;
    cout<<"y="<<y<<endl;
}