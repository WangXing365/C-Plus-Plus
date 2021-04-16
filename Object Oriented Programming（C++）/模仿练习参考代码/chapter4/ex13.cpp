/*
1．不使用strlen()函数，用字符指针方法，求字符串的长度。
2．不使用strcat()函数，用字符指针方法，实现两个字符串的连接功能。
*/
#include <iostream.h>

void main()
{  
	int  i,count=0;
	char chStr[80],*p;
	//1．不使用strlen()函数，用字符指针方法，求字符串的长度。
	cout<<"请输入一个字符串: ";
	cin.getline(chStr,79,'\n');
	p = chStr;
	for( i=0; *p != '\0'; i++,p++)     //用串结束标识'\0'控制循环终止
	{   
	   ;
	
	}
	cout<<"字符串:"<<chStr<<"的长度="<<i<<"\n";

	//2. 不使用strcat()函数，实现两个字符串的连接功能。
	char a[80]="good ",b[]="morning.";
	char *pa = a,*pb = b;
	while(*pa !='\0')pa++;

	while(*pb !='\0')
	{
		*pa = *pb;
		pa++;pb++;
	}
	*pa ='\0';
	cout<<"两个字符串的连接后："<<a<<endl;
}
