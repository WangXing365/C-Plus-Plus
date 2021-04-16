//【例3.15】 求1~100之间不能被8整除的数。
#include "iostream.h"
void main()
{
	int n;
    for(n = 1; n <= 100; n++)
{ 
	if(n%8 == 0) continue;
        cout<<"  "<<n;
    }
}
