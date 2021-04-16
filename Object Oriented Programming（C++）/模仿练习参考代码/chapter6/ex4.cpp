/*
定义一个复数类Complex，数据成员包括实部和虚部。
成员函数包括：(1)设置实部；(2)设置虚部；(3)取实部值；(4)取虚部值；(5)输出复数。
在主函数中定义一个复数类的对象，然后对所有成员函数进行测试。
*/
#include "iostream.h"

class Complex
{
private:
	int  real,image;
public:
	void SetR(int r);
	void SetI(int i);
	int  GetR();
	int  GetI();
	void Display();
};

void Complex::SetR(int r)
{
	real = r;
}

void Complex::SetI(int i)
{
	image = i;
}
int  Complex::GetR()
{
	return real;
}
int  Complex::GetI()
{
	return image;
}
void Complex::Display()
{
   cout<<"复数："<<real<<"+"<<image<<"i"<<endl;
}

void main()
{
	Complex a;
	a.SetR (3);
	a.SetI (4);
	a.Display ();
	cout<<a.GetR ()<<"+"<<a.GetI ()<<"i"<<endl;
}