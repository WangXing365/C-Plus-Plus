//【例6.17】测试静态成员函数的使用。
#include <iostream.h>
int s = 0;
class  Sample
{
	static int  n;           //静态数据成员n
public:
    Sample(int i){ n = i; }
	static void  add(){s+=n;} //静态成员函数add()
};
int  Sample::n = 0;       	  //静态数据成员n的初始化
void main()
{
	Sample  A(2),B(5);
	Sample::add();         	  //访问静态成员函数add()
	cout<<"s = "<<s<<endl;
}
