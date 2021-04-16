/*
1. 从键盘顺序输入10名参赛者的成绩，统计总成绩。
*/
#include  "iostream.h"
void main()
{
	int a[10],i,sum=0;
	cout<<"输入10名学生的成绩: ";            //提示输入数据
	for(i=0;i<10;i++)                        //输入的数据存储在数组a中
		cin>>a[i];
	for(i=0;i<10;i++)                        //输出数组的各元素
	  sum +=a[i];
	cout<<"10名学生的总成绩="<<sum<<endl;
}
