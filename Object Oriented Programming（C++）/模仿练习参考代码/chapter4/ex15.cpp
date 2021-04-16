//设计一个程序，将十进制数分别转换为八进制数和十六进制数。
    
    #include "iostream.h"
    #define  NUM    8
	void main()
	{
    	int i, j, n, m, a[32]={0};
    	cout<<"请输入一个十进整数(0～2147483647): ";
    	cin>>n;
		cout<<"对应的"<<NUM<<"进制数是:";
    	for(m=0;m<32;m++) 
    	{
			if(n==0)break;
        	i = n%NUM;
        	j = n/NUM;
        	n = j;
        	a[m] = i;
    	}
    	for(i=m-1;i>=0;i--)           //输出转换好的NUM进制数
    	{
        	cout<<a[i];
       	}
		cout<<endl;
	}
