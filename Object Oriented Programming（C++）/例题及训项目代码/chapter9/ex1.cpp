//【例9.1】 使用函数重载，交换两个变量的值。
#include <iostream.h>
void fnSwap(char &,char &);
void fnSwap(int &,int &);
void fnSwap(double &,double &);
void main()
{
	char a1 = 'a', a2 = 'b';
	int  b1 = 10,  b2 =  20;
	double c1 = 2.5, c2 = 3.5;
	fnSwap(a1,a2);						//A行
	fnSwap(b1,b2);						//B行
	fnSwap(c1,c2);						//C行
	cout<<"a1="<<a1<<", a2="<<a2<<endl;
		cout<<"b1="<<b1<<", b2="<<b2<<endl;
cout<<"c1="<<c1<<", c2="<<c2<<endl;
}
void fnSwap(char &x,char &y)				//重载函数①
{
	char temp;
	temp = x; x = y; y = temp;
}
void fnSwap(int &x,int &y) 				//重载函数②
{
	int temp;
	temp = x; x = y; y = temp;
}
void fnSwap(double &x,double &y) 			//重载函数③
{
	double temp;
	temp = x; x = y; y = temp;
}
