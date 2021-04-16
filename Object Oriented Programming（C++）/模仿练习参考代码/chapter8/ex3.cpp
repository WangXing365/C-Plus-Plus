/*
1．在例8.9中，利用运算符重载为类成员函数，完成方阵类的减、乘运算。
*/
#include <iostream.h>
const int N=3,L=3,M = 3;
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
	{	int i,j;
		for(i=0;i<N;i++)
		{	for(j=0;j<L;j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	CMatric operator+(const CMatric x); //加法运算符重载为成员函数的声明
	CMatric operator-(const CMatric x); //减法运算符重载为成员函数的声明
	CMatric operator*(const CMatric x); //乘法运算符重载为成员函数的声明

};
CMatric CMatric::operator+(const CMatric x)
{   CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= this->a[i][j]+x.a[i][j];
	return k;
}

CMatric CMatric::operator-(const CMatric x)
{   CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= this->a[i][j]-x.a[i][j];
	return k;
}
CMatric CMatric::operator*(const CMatric x) //aNXM  bMXL
{   CMatric k;
	int i,j,m1;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)
	{
		k.a[i][j] = 0;  
		for(m1=0;m1<M;m1++)
		   k.a[i][j] += this->a[i][m1]*x.a[m1][j];
	}
	return k;
}
void main()
{
	int  aa[N][L]={ 1,2,3,4,5,6,7,8,9};
	int  bb[N][L]={-1,0,1,2,3,4,5,6,7};
	CMatric x(aa),y(bb);
	CMatric z;
	z = x + y;              //方阵类的加法运算
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
