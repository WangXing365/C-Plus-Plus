//【例8.11】利用运算符重载为类的友元函数，修改例8.9,重新设计方阵类的加、减、乘运算。
#include <iostream.h>
const int N=3,L=3;
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
};
CMatric operator+(const CMatric x,const CMatric y)//定义加法运算符重载函数
{ 
	CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= x.a[i][j]+y.a[i][j];
	return k;
}
void main()
{
    int  aa[N][L]={11,21,31,41,51,61,71,81,11};
	int  bb[N][L]={10,12,13,14,15,16,17,18,19};
	CMatric x(aa),y(bb);
	CMatric z;
	z = x + y;
	cout<<"x矩阵：\n";
	x.print();
	cout<<"y矩阵：\n";
	y.print();
	cout<<"x+y矩阵：\n";
	z.print();
}
