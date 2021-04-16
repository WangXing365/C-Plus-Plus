//【例9.4】求数组中元素的最大值。
#include <iostream.h>
template <class T>
T fnMax(T *x,int n)     //函数模板
{
	T  max = x[0];
	for(int i=0;i<n;i++)
	{
		if(max<x[i])max = x[i];
	}
	return max;
}
void main()
{
	int a[]={ 2,3,4,44,56,55,94,7};
	double b[]={2.5,5.2,90.5,56.3,43.9};
	cout<<"最大值:"<<fnMax(a,8);//A,被解释成fnMax(int *,int)模板函数
	cout<<"最大值:"<<fnMax(b,5);//B,被解释成fnMax(double *,int)模板函数
}
