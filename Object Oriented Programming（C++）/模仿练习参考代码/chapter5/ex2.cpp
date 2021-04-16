/*
1. 用递归函数，把十进制数转换成八进制数。
2. 编写一个递归函数，将整数的每个位上的数值按相反的顺序输出。例如：输入1234,输出4321。
*/
#include <iostream.h>
#define  NUM     8
//用递归函数，把十进制数转换成NUM进制数。
void fn10toNUM(int n,int a[],int m)
{
	if(n<NUM){
		a[m]=n;
        return;
	}
	a[m] = n%NUM;
	fn10toNUM(n/NUM,a,++m);
}
//将整数的每个位上的数值按相反的顺序输出
void fnOPrint(int n)
{
	if(n<10)
	{
		cout<<n<<endl;
		return;
	}
	cout<<n%10;
	fnOPrint(n/10);
}

void main()
{
    int n,m=0, a[16]={0};
    cout<<"输入一个十进制整数(0-32767): ";
    cin>>n;
    fn10toNUM(n,a,m); 
   	cout<<"对应的"<<NUM<<"进数是：";
    for(n=15;n>=0;n--)           //输出转换好的NUM进制数
    {
       	cout<<a[n];
    }
	cout<<endl;
    cout<<"输入一个整数: ";
    cin>>n;
	cout<<"顺序输出:";
	fnOPrint(n);
}
