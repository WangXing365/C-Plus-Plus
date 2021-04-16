//【例5.16】 从键盘输入一串字符，统计数字字符的个数。
#include <iostream.h>
inline int IsNumber(char);   //内联函数声明
void main()
{
		char ch;
		int iCount=0;
		cout<<"请输入字符串：";
		while((ch = cin.get()) !=  '\n')
		{
			if(IsNumber(ch))iCount++;
		}
		cout<<"你输入的字符串中含有 "<<iCount<<" 个数字字符。"<<endl;
	}
	inline int IsNumber(char ch) //内联函数定义
	{
		return (ch>='0' && ch<='9')? 1:0;
	}

