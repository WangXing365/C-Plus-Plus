#include "iostream.h"
#include <stdio.h>
void main1()
{
	//cout<<"Hello C++"<<endl;
	//cout<<"The sum is 55"<<endl;

	int c1,c2;						/*定义整型变量c1,c2  */
	c1 = 'a';						/*将字符常量'a'赋给c1*/
	c2 = 97; 						/*将97('a'的ASCII码)赋给字符变量x*/
	printf("c1=%c,c2=%c\n",c1,c2);	/*用字符格式输出c1,c2*/
	printf("c1=%d,c2=%d\n",c1,c2);	/*用整数格式输出c1,c2*/
}
#include <iostream.h>
void main()
{
	int x = 1234,y = 01234,z = 0x1234;
	cout<<dec<<x<<","<<y<<","<<z<<endl;    // dec:以十进制格式符输出
	cout<<oct<<x<<","<<y<<","<<z<<endl;    // oct:以八进制格式符输出
	cout<<hex<<x<<","<<y<<","<<z<<endl;    // hex:以十六进制格式符输出
}

