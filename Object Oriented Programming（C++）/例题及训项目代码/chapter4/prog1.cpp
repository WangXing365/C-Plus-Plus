// 项目1：不同进制数的转换
#include "iostream.h"
	void main()
	{
    	int i, j, n, m, a[32]={0};
    	cout<<"请输入一个十进整数(0～2147483647): ";
    	cin>>n;
		cout<<"对应的二进制数是:";
    	for(m=0;m<32;m++) 
    	{
        	i = n%2;
        	j = n/2;
        	n = j;
        	a[m] = i;
    	}
    	for(m=31;m>=0;m--)           //输出转换好的二进制数
    	{
        	cout<<a[m];
        	if(m%4==0)cout<<" ";
    	}
		cout<<endl;
	}
