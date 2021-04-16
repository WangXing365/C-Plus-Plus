//【例7.8】分析以下程序的执行结果。
#include <iostream.h>
class  A		//定义基类A
{
     int a;
public:
   	A (int i )  
		{	a=i; cout <<"执行A基类的构造函数\n";	}
		void dispA( ) { cout <<"a="<< a << endl;}
};

class B            //定义基类B
{
		int b;
public:
   	B(int j )  
		{ 	b=j; cout << "执行B基类的构造函数\n"; }
		void dispB( ) { cout <<"b=" << b << endl; }
};
//定义A和B的派生类C，B在前，A在后，所以先调B的构造函数，后调A的构造函数
class C : public  B, public  A
{ 
		int c;
public:
		C(int x,int y,int z): A(x),B(y)     //包含基类成员初始化列表
     {
			c=z; 
			cout << "执行C派生类的构造函数\n";
		}
		void disp( )
		{
			dispA( );
			dispB( );
			cout << "c="<< c << endl;
		}
};
void main( )
{
   	C  obj (10,11,12);
   	obj.disp();       //调用类C的disp( )成员函数
}
