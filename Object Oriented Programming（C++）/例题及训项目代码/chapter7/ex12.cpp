//【例7.12】虚基类的构造函数。
#include <iostream.h>
class A
{
public:
	A( ) { cout << "类A的构造函数"<< endl;}
};
class B
{
public:
	B( ) { cout <<"类B的构造函数" << endl;}
};
class C: public B, virtual public A
{
public:
    C( ) { cout <<"类C的构造函数"<< endl;}
};
class D: public B,virtual public A
{
public:
    D( ) { cout <<"类D的构造函数"<< endl;}
};
class E: public C ,virtual public D
{
public:
   E( ) { cout <<"类E的构造函数"<< endl;}
};
void main( )
{
    E  obj;
}
