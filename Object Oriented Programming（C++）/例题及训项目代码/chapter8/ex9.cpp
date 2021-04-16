//【例8.9】利用运算符重载为类成员函数，设计方阵类的加、减、乘运算。
//在此仅重载方阵类的加法运算，重载减法和乘法运算类似，留给读者完成。
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
	{	int i,j;
		for(i=0;i<N;i++)
		{	for(j=0;j<L;j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	CMatric operator+(const CMatric x); //加法运算符重载为成员函数的声明
};
CMatric CMatric::operator+(const CMatric x)
{   CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= this->a[i][j]+x.a[i][j];
	return k;
}
void main()
{
	int  aa[N][L]={11,21,31,41,51,61,71,81,11};
	int  bb[N][L]={10,12,13,14,15,16,17,18,19};
	CMatric x(aa),y(bb);
	CMatric z;
	z = x + y;              //方阵类的加法运算
	cout<<"x矩阵：\n";
	x.print();
	cout<<"y矩阵：\n";
	y.print();
	cout<<"x+y矩阵：\n";
	z.print();
}
