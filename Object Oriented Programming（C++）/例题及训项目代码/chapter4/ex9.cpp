//【例4.9】 字符串的输入与输出。
#include <stdio.h>
void main()
{
    char  chA[80];
    puts("请输入一个字符串: ");
    gets(chA);
    printf("你输入的字符串是: %s\n",chA);
}
