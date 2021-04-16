/*
2．利用运算符重载为类的友元函数，设计复数类的自增运算。
*/
#include <iostream.h>
class complex
{
	double real,image;
public:
		complex(){real=0;image=0;}
		complex(double r,double i)
		{ real=r;image=i; }
		void display()
		{
			if(image<0)
				cout<<real<<image<<"i"<<endl;
			else 
				cout<<real<<"+"<<image<<"i"<<endl;
		}
		friend complex operator++(complex &);	   //前缀自增
		friend complex operator++(complex &,int);  //后缀自增
};

complex operator++(complex &e)		//前缀自增
{
		return complex(++e.real,++e.image);
}

complex operator++(complex &e,int) //后缀自增	
{
		return complex(e.real++,e.image++);
}
void main()
{
	complex p1(10,10),p2;
	p2 = p1++;
	p1.display();
	p2.display();
	p2 = ++p1;
	p1.display();
	p2.display();
}
