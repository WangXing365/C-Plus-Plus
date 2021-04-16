/*
设a=2,b=5，c=6，计算下列表达式值。
(1)  ++a-b+++1           (2) a+b>c&&b==c    
(3) !(a+b)+c-1&&b+c/2    (4) ++a+10+3*4/5-'a'
*/
#include "stdio.h"
void main()
{
    int  a=2,b=5,c=6;

	printf("++a-b+++1 =%d\n",++a-(b++)+1);				//(1)  ++a-b+++1
	printf("a+b>c&&b==c =%d\n", a+b>c && b==c);			// (2) a+b>c&&b==c
	printf("!(a+b)+c-1&&b+c/2 =%d\n",!(a+b)+c-1&&b+c/2);//(3) !(a+b)+c-1&&b+c/2
	printf(" ++a+10+3*4/5-'a' =%d\n", ++a+10+3*4/5-'a');//(4) ++a+10+3*4/5-'a'
}