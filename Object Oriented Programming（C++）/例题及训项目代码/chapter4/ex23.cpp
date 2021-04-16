//【例4.23】用下标法和指针法引用数组元素。
#include "iostream.h"
void main()
{
	int data[6]={0,3,6,9,12,15};
	int *p = data, i;                      //p指向数组data
   	for(i=0; i<6; i++)cout<<data[i]<<" ";  //数组名下标法
   		cout<<endl;
   	for(i=0; i<6; i++)cout<<*( data+i)<<" ";//数组名指针法
		cout<<endl;
    for(i=0; i<6; i++)cout<<p[i]<<" ";      //指针变量下标法
		cout<<endl;
    for(i=0; i<6; i++)cout<< *(p+i)<<" ";   //指针变量指针法
		cout<<endl;
}

