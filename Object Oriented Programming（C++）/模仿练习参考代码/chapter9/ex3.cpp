/*
1．设计一个函数模板求x3,并以整型和双精度型进行调用。
2．编写一个函数模板，返回两个值中较小者，同时能正确处理字符串。
   提示：设计一个函数模板，能处理int、float和char等数据类型，再添加一个重载函数专门处理字符串比较。
*/
#include "iostream.h"
#include "string.h"

template <class T>
T  fnPower(T x)        //1. 函数模板求x3   
{
  	return x*x*x;
}

template <class T>
T  fnMin(T x,T y)       //2. 两个值中较小者函数模板 
{
	return x<y?x:y;
}

char * fnMin(char *x,char *y)//重载函数专门处理字符串比较
{
    if(strcmp(x,y)<=0)return x;
	else              return y;
}

void main()
{
	int a=2,m=9;
	double  b=3.1;
	cout<<"1. 测试函数模板fnPower：\n";
	cout<<"a^3="<<fnPower(a)<<",b^3="<<fnPower(b)<<endl;
	
	cout<<"2. 测试函数模板fnMin：\n";
    char x[] = "good morning",y[]="very good";
	cout<<fnMin(x,y)<<endl;
	cout<<fnMin(a,m)<<endl;
	cout<<fnMin('a','m')<<endl;
	cout<<fnMin(3.14F,2.12F)<<endl;
}
