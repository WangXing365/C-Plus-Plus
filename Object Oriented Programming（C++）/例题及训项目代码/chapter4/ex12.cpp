//【例4.12】 字符串连接。
#include <stdio.h>
#include <string.h>
void main()
{
    char  chA[80],chB[80];
    printf("请输入A字符串: ");
    gets(chA);
    printf("请输入B字符串: ");
    gets(chB);
    printf("A字符串是:");
    puts(chA);
    printf("B字符串是: ");
    puts(chB);
    strcat(chA,chB);             //将chB中的串连接到chA的后面
    printf("连接后，A字符串是:");
    puts(chA);
}
