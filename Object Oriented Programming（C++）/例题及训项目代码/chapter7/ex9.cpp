// 【例7.9】 用"类名::"避免二义性示例1
#include<iostream.h> 
class A 
{ 
public: 
		int a; 
};                                                                                                                             
class B : public A 
{
public: 
		float b; 
};  
class C : public A
{ 
public: 
		float c; 
}; 
class D : public B, public C
{
public:
	int d;
	void print()
	{  
		cout<<"B::a="<<B::a;         //访问从B中继承过来的 a
	    cout<<"\nC::a="<<C::a;       //访问从C中继承过来的 a
	    cout<<"\nb="<<b;
	    cout<<"\nc="<<c;
		cout<<"\nd="<<d<<endl;
	}
};
void main()
{
   D  od;              //定义D的对象od
   od.B::a=1;          //访问od中从B继承过来的 a
   od.C::a=2;          //访问od中从C继承过来的 a
   od.b=3.5f;
   od.c=4.8f;
   od.d=5;
   od.print();
} 
