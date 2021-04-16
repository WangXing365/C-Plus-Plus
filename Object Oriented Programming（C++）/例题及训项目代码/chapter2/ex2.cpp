//【例2.2】字符型数据和整型数据通用举例。
#include <stdio.h>
void main()
{
	int c1,c2;					//定义整型变量c1,c2 
	c1 =  'a' ;					 	//将字符常量 a 赋给变量c1
	c2 = 97; 						//将97（ a 的ASCII码）赋给变量c2
	printf("c1=%c,c2=%c\n",c1,c2);	//用字符格式输出变量c1,c2
	printf("c1=%d,c2=%d\n",c1,c2);	//用整数格式输出变量c1,c2
}
