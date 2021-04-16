//【例3.16】 求1~36的整数之和。
#include "iostream.h"
void main( )
 	{
int  i=1,sum=0;
  	loop: 
		sum+=i;
        i++;
        if(i <= 36)goto  loop;
    	cout<<sum<<endl;
}
