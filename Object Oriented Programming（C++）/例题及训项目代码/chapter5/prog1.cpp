//项目1：求数组中的最小值
#include <iostream.h>
int fnMin(int array[ ],int n)
{
	   int m,i;
	   m = array[0];
	   for(i=1;i<n;i++)
		if(m>array[i])m = array[i];
	   return m;
}
void main()
{
    int a[20],m,n,i;
    cout<<"请输入元素个数: ";
    cin>>n;
    cout<<"输入元素: ";
    for(i=0;i<n;i++)
       cin>>a[i];
    m = fnMin(a,n);             			//调用函数求最小数
    cout<<"最小数="<<m<<endl;
} 
