//【例7.6】分析下列程序的输出结果。
#include <iostream.h>
class A
{
public:
	A( ) 
	{ cout << "执行A类构造函数\n";}
	~A( ) 
	{ cout << "执行A类析构函数\n";}
 };
class B : public A
{
public:
	B( ) 
	{ cout << "执行B类构造函数\n";}
	~B( ) 
	{ cout << "执行B类析构函数\n";}
 };
void main( )
{
    B  b;
    cout<<"其它执行语句。"<< endl;
}
