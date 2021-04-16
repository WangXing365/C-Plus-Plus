//【例4.13】从键盘输入2个字符串，将其中最大的输出。
#include "iostream.h"
#include "string.h"
void main()
{
	char str1[81],str2[81],str[81];
	cout<<"请输入2个字符串："<<endl;
	cin.getline(str1,80);
	cin.getline(str2,80);
	if(strcmp(str1, str2)<0)strcpy(str1,str2);
	strcpy(str,"最大的字符串是：");
	strcat(str,str1);
	cout<<str<<endl;
}

