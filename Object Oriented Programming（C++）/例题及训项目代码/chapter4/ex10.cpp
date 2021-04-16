//【例4.10】 输入一串字符，求出其长度。
#include <iostream.h>
void main()
{  
	int  i;
	char chStr[50];
	cout<<"请输入一个字符串: ";
	cin.getline(chStr,'\n');
	for( i=0;chStr[i] != '\0'; i++)     //用串结束标识'\0'控制循环终止
	{   ;   }						   //循环体是空语句
	cout<<"字符串的长度是"<<i<<endl;
}

