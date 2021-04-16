//【例5.6】 计算n的阶乘n!。
#include "iostream.h"
long fact(int n)                //递归函数 
{
     if(n<=1) return 1;           //终止条件 
     return (fact(n-1) * n);    //递归调用 
}
void main()
{   int num;
    cout<<"\n请输入一个正整数(小于12): "<<endl;
    cin>>num;
    cout<<num<<"! = "<<fact(num);
}
