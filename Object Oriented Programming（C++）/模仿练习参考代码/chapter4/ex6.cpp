//2. 定义并初始化一个3行4列的二维数组，然后求其最大值并输出	。
#include <iostream.h>
void main()
{
	int a[3][4]= {{11,12,13,14},{21,212,23,24},{31,32,33,34}},i,j,max;

	max = a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(max<a[i][j])max=a[i][j];
	cout<<"max="<<max<<endl;
}