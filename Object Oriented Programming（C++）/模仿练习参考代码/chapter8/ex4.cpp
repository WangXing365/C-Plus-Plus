//2．利用运算符重载为类成员函数，设计复数类的加减运算。
#include <iostream.h>

class complex
{
	double real,image;
public:
	complex();
	complex(double r,double i);
	complex operator + (const  complex &c);
	complex operator - (const  complex &c);
    friend void print(const complex &c) ;   
};

complex::complex()
{
	real=0; image=0;
}
complex::complex(double r,double i)
{
	real=r; image=i;
}

complex complex::operator + (const  complex &c)
{
	return complex(real+c.real,image+c.image);
}
complex complex::operator - (const  complex &c)
{
	return complex(real-c.real,image-c.image);
}

void print(const complex &c)
{
	if(c.image <0)
		cout<<c.real <<c.image <<"i"<<endl;
	else
		cout<<c.real <<"+"<<c.image <<"i"<<endl;
}

void main()
{
   complex  c1(1.0,2.0),c2(3.0,-5.0),c3;
   c3 = c1+c2;
   cout<<"c1=";
   print(c1);
   cout<<"c2=";
   print(c2);
   cout<<"c1+c2=";
   print(c3);
   c3 = c1-c2;
   cout<<"c1-c2=";
   print(c3);
}