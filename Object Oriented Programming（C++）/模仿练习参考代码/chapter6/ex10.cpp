/*
  为"§6.2.1中的模仿练习"复数类Complex增加一个友元函数，用于输出一个复数对象。
  友元函数的原型为：void Output(Complex &);。
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
	friend void Output(Complex &);//友元函数的声明
};
void Output(Complex &p)
{
    cout<<"复数："<<p.real<<"+"<<p.image<<"i"<<endl;
}

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
	Output(a);     //调用友元函数
	cout<<a.GetR ()<<"+"<<a.GetI ()<<"i"<<endl;
}