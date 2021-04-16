#include "stdio.h"
extern int a;
extern int fn(int x);
int gg()
{return 1;
}
main()
{
int b=9;
a+=8;
b = fn(3);
printf("\n%d,%d\n",a,b);

}