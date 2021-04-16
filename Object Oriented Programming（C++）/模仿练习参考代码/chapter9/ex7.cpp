/*
  用函数模板实现智能加法器的扩展。实现2个或3个数相加，
  这些数的数值类型可以是整数或实数型数。（提示：利用函数模板的参数缺省）
*/
#include "iostream.h"
template <class T>
T  fnSum(T x,T y,T z=0)           
{
  	return x+y+z;
}

void main()
{

	cout<<"2+3="<<fnSum(2,3)<<",2+3+4="<<fnSum(2,3,4)<<endl;
	cout<<"2.5+3.0="<<fnSum(2.5,3.0)<<",2.1+3.1+4.1="<<fnSum(2.1,3.1,4.1)<<endl;

}
