//【例1-3】 演示基本的C++输入/输出流的使用方法。
	#include "iostream.h"
	void main()
	{
		char a;
		cout<<" 请输入一个字符：";       //在屏幕上显示"请输入一个字符："
		cin>>a;                          //输入数据到变量a
		cout<<"你输入的字符是："<<a<<endl;
	}
