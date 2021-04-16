/*
1．在例8.11中，利用运算符重载为类友元函数，完成方阵类的减、乘运算。
*/
#include <iostream.h>
const int N=3,L=3,M=3;
class CMatric
{
private:
		int a[N][L];
public:
	CMatric()
	{
		int i,j;
		for(i=0;i<N;i++)
		for(j=0;j<L;j++)a[i][j]=0;
	}
	CMatric(const int b[N][L])
	{
		int i,j;
		for(i=0;i<N;i++)
		for(j=0;j<L;j++)a[i][j]=b[i][j];
	}
	~CMatric(){}
	void print()
	{
		int i,j;
		for(i=0;i<N;i++)
		{	for(j=0;j<L;j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	friend CMatric operator+(const CMatric x,const CMatric y); //加法运算符重载为友元函数的声明
	friend CMatric operator-(const CMatric x,const CMatric y); //减法运算符重载为友元函数的声明
	friend CMatric operator*(const CMatric x,const CMatric y); //乘法运算符重载为友元函数的声明
};
CMatric operator+(const CMatric x,const CMatric y)//定义加法运算符重载函数
{ 
	CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= x.a[i][j]+y.a[i][j];
	return k;
}
CMatric operator-(const CMatric x,const CMatric y)//定义减法运算符重载函数
{ 
	CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= x.a[i][j]-y.a[i][j];
	return k;
}
CMatric operator*(const CMatric x,const CMatric y)//定义乘法运算符重载函数
{ 
	CMatric k;
	int i,j,h;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)
	{	
		k.a[i][j]= 0;
		for(h=0;h<M;h++)
		  k.a[i][j] += x.a[i][h]*y.a[h][j];
	}
	return k;
}
void main()
{
    int  aa[N][L]={1,2,3,4,5,6,7,8,9};
	int  bb[N][L]={-1,0,1,2,3,4,5,6,7};
	CMatric x(aa),y(bb);
	CMatric z;
	z = x + y;
	cout<<"x矩阵：\n";
	x.print();
	cout<<"y矩阵：\n";
	y.print();
	cout<<"x+y矩阵：\n";
	z.print();
	cout<<"x-y矩阵：\n";
	z = x - y;              //方阵类的减法运算
	z.print();
	cout<<"x*y矩阵：\n";
	z = x * y;              //方阵类的乘法运算
	z.print();
}
