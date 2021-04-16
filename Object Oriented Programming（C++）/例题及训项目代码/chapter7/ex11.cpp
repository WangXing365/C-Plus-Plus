 //【例7.11】用虚基类避免二义性。
#include<iostream.h> 
class A 
{ 
public: 
		int a; 
};                                                                                                                             
class B : virtual public A     // A是虚拟基类
{
public: 
		float b; 
};  
class C : virtual public A    // A是虚拟基类
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
		cout<<"a="<<a;            // 直接访问成员 a
	    cout<<"\nb="<<b;
	    cout<<"\nc="<<c;
		cout<<"\nd="<<d<<endl;
	}
};
void main()
{
	D od;            // 定义D的对象od
    od.a=1;          // 访问od中的成员 a
    od.b=3.5;
    od.c=4.8f;
    od.d=5;
    od.print();
}
