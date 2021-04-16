//项目1：冒泡排序函数模板
#include "iostream"
#include "string"
using namespace std;
template <class T1,class T2>
void fnBubbleSort(T1 x,T2 temp,int count,bool ascend)
{
   for(int i=0;i<count-1;i++)
	   for(int j=0;j<count-1-i;j++)
		  if(ascend)
		  {
			  if(x[j]>x[j+1])
			  {
				 temp  = x[j];
				 x[j]  = x[j+1];
				 x[j+1]= temp;
			  }
		  }
		  else 
		  {
			  if(x[j]<x[j+1])
			  {
				 temp  = x[j];
				 x[j]  = x[j+1];
				 x[j+1]= temp;
			  }
		  }
}
void main()
{
	int iTemp,i;
	double dTemp;
	string sTemp;
	int a[]={1,5,33,34,-89,86,31};
	cout<<"\n   int型数组排序前：";
	for(i=0;i<7;i++)cout<<a[i]<<" ";
	fnBubbleSort(a,iTemp,7,false);
	cout<<"\n   int型数组排序后：";
	for(i=0;i<7;i++)cout<<a[i]<<" ";

	double b[]={1.6,5.3,3.3,3.4,-8.9,86,31};
	cout<<"\n doube型数组排序前：";
	for(i=0;i<7;i++)cout<<b[i]<<" ";
	fnBubbleSort(b,dTemp,7,false);
	cout<<"\n doube型数组排序后：";
	for(i=0;i<7;i++)cout<<b[i]<<" ";

	string c[]={"good","morning","how","are","you"};
	cout<<"\nstring型数组排序前：";
	for(i=0;i<5;i++)cout<<c[i]<<" ";
	fnBubbleSort(c,sTemp,5,false);
	cout<<"\nstring型数组排序后：";
	for(i=0;i<5;i++)cout<<c[i]<<" ";
}
