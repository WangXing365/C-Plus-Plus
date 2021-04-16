//【例5.19】 函数默认参数的用法。
#include "iostream.h"
int fnAdd(int x, int y=10);       //带默认参数的函数说明
void main()
{  
	int  b= 6;
	int  x,y;
	x  = fnAdd(20);			//省略了第2个实参，取默认值10
	y  = fnAdd(20,b);		     //提供实参，调用时按实际参数调用
	cout<<"fnAdd(20)= "<<x<<",fnAdd(20,b)"<<y<<endl;
}
int fnAdd(int x, int y)
{
    return x+y;
}
