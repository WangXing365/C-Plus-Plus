/*
1．在数组中查找一个数，要求用函数实现。
2．在数组中，按指定位置插入一个新数，要求用函数实现。
*/
#include <iostream.h>
//在数组中查找一个数，要求用函数实现
int fnFind(int array[ ],int n,int x)
{
	   int i;
	   
	   for(i=0;i<n;i++)
		if(x == array[i])return 1;
       return 0;
}
//在数组中，按指定位置插入一个新数
void fnInsert(int a[],int n,int index,int x)
{
    int i;
	if(index >n || index <0)
	{
		cout<<"插入位置错误！！"<<endl;
		return ;
	}
	for(i=n;i>index;i--)
		a[i]=a[i-1];
	a[index] = x;
}

void main()
{
	int a[8]={1,2,3,4,5,6,7};
	int x=89;
	fnInsert(a,7,3,x);
	for(int i=0;i<8;i++)
		cout<<a[i]<<" ";
	if(fnFind(a,8,5)==1)
		 cout<<"找到了"<<endl;
	else cout<<"没有找到！"<<endl; 
}