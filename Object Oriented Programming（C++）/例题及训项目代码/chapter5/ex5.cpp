//【例5.5】 计算s = 1! + 2! + 3! + … + 10!
#include "iostream.h"
long fnFact(int n)
{  
	int i;  long f=1L;
    for(i=1; i<=n; i++) f=f*i;
    return f;
}
void fnSum(int n)
{  
	int i;  long s=0L;
     for(i=1; i<=n; i++)
	   s += fnFact(i);        //调用fact()函数 
     cout<<"1! + 2! + … +"<<n<<"!="<<s<<endl;
}
void main()
{  
	int num;
    cout<<"请输入一个正整数(<=12): ";
    cin>>num;
    fnSum(num);           //调用fnSum()函数 
}

