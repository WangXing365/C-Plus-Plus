//【例6.16】 使用静态数据成员。
#include <iostream.h>
class Sample
{
	int  n;
public:
    Sample(int i){ n = i; }
	void  add(){ Sample::s += n;}//静态数据成员的引用,可省略Sample::
	static  int  s; 			 //静态数据成员定义
};
int  Sample::s = 0;  			 //静态数据成员的初始化，不能省略Sample::
void main()
{
	Sample  a(2),b(5),c(8);
	a.add();
	cout<<"s = "<< Sample::s<<endl; //静态数据成员的引用
	b.add();
	cout<<" s= "<< Sample::s<<endl; //静态数据成员的引用
	c.add();
	cout<<"s = "<< Sample::s<<endl; //静态数据成员的引用
}
