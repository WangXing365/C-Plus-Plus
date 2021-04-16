//【例5.7】用递归函数求m和n的最大公约数。
#include <iostream.h>
int fnGcd(int m,int n)
{
    int k;
    if(n == 0)k = m;
    else      k = fnGcd(n, m%n);
    return k;
}
void main()
{
    int m,n,k;
    cout<<"请输入两个整数m,n: " ;
    cin>>m>>n;
    k = fnGcd(m,n);
    cout<<m<<"和"<<n<<"的最大公约数是"<<k<<endl;
}
