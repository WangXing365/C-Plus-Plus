//【例2.13】从键盘输入两个整数并输出较大数（用条件表达式求解）。
#include "iostream.h"
void main()
{	int a,b,max;
	cout<<"请输入2个数a,b ：";
	cin>>a>>b; 
	max  =  a>b  ?  a  :  b;     //a>b?a:b是一个条件表达式
	cout<<"max= "<<max<<endl;
}

