//【例4.20】 通过指针变量访问简单变量。
#include <iostream.h>
void  main()
{	int  x;                  	 //定义一个简单变量x
 	int  *px;                 	 //定义一个指针变量px
 	//①直接方式访问变量x 
	x = 10;                   	 //直接方式给变量x 赋值
 	cout<<"x="<< x<<endl;     	 //直接方式输出变量x
	//② 间接方式访问变量x 
	px = &x;                 	 //把变量x的地址赋给px
	*px = 100;               	 //间接方式给变量x 赋值
	cout<<"*px="<< *px<<endl;      //间接方式输出变量x
	//③ *px与x的等价性验证
	cout<<"x="<< x<<endl;          //直接方式输出变量x 
}



