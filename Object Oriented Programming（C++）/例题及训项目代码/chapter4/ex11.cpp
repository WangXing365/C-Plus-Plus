//【例4.11】 字符串复制。
#include <stdio.h>
#include <string.h>				//字符串处理函数的原型在头文件string.h中
void main()
{
    char  chA[80],chB[80];
    printf("请输入一个字符串: ");
    gets(chA);					//输入一个串字符存储到字符数组chA中
    strcpy(chB,chA);           		//将chA中的内容复制到chB中
    printf("复制后字符数组chA中的内容是:");
    puts(chA);
    printf("复制后字符数组chB中的内容是:");
    puts(chB);
}

