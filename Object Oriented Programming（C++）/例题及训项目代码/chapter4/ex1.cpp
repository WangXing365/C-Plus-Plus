//【例4.1】 从键盘输入6名学生的成绩存储在数组中，然后将数组输出。
#include  "iostream.h"
void main()
{
	int a[10],i;
	cout<<"输入6名学生的成绩: ";           //提示输入数据
	for(i=0;i<6;i++)                        //输入的数据存储在数组a中
		cin>>a[i];
	cout<<"6名学生的成绩是: ";
	for(i=0;i<6;i++)                        //输出数组的各元素
		cout<<a[i]<<"\t";
	cout<<"\n";
}
