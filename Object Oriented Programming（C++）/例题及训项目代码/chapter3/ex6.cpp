//【例3.6】 利用while语句，计算1+2+…+100的值，并输出计算结果。
#include "iostream.h"
void main( )
{
	int Sum,i;
	Sum = 0; i = 1;
	while (i <= 100)
	{
		Sum += i;
		i++;
	}
	cout<<"Sum is "<< Sum<<endl;
}
