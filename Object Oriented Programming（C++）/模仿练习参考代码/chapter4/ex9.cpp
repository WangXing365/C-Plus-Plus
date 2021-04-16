/*
1. 不使用strcpy()函数，实现字符串的复制功能。
2. 不使用strcat()函数，实现两个字符串的连接功能。
3. 不使用strlen()函数，求字符串的长度。
*/
#include "iostream.h"
#include "stdio.h"
void main()
{
	char a[]="one string",b[]="tow string",str[80];
	int i,j;
	//不使用strcpy()函数，实现字符串的复制功能。
	for(i=0;a[i]!='\0';i++)
		str[i] = a[i];
	str[i]='\0';
	puts(str);
	//2. 不使用strcat()函数，实现两个字符串的连接功能。
	i=0;
	while(str[i]!='\0')i++;
	j=0;
	while(b[j]!='\0')
	{
		str[i+j]=b[j];
		j++;
	}
	str[i+j]='\0';
	puts(str);
	//3. 不使用strlen()函数，求字符串的长度。
	i=0;
	while(str[i]!='\0')i++;
    cout<<"字符串"<<str<<"的长度="<<i<<endl;
}