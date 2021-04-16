/*
1．若有int b=7;float a=2.5F,c=4.7F;求表达式a+(b/2*(int)(a+c)/2)%4的值
2. 若有int a=2,b=6;表达式(a++)*(--b)执行后，变量a和b的值分别为多少？
*/

#include "stdio.h"
void main()
{	//1．若有int b=7;float a=2.5F,c=4.7F;求表达式a+(b/2*(int)(a+c)/2)%4的值
	int b=7;
	float a=2.5F,c=4.7F;
	printf("a+(b/2*(int)(a+c)/2)%4 =%d\n",a+(b/2*(int)(a+c)/2)%4);
	//2. 若有int a=2,b=6;表达式(a++)*(--b)执行后，变量a和b的值分别为多少？
	a=2;b=6;
	(a++)*(--b);
	printf("a=%f,b=%d\n",a,b);
}