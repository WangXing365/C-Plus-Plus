/*
2. 构造一个类模板CValue，这个类中可以存放3个数值，并且具有两个成员函数。
   成员函数的功能分别求出3个数中的最大值以及最小值。用户输入3个数，
   将最大和最小值输出在屏幕上。
*/
#include <iostream.h>
template <class T>   //指出在类模板中用到的通用数据类型
class CValue
{
private:
	T x,y,z;
public:
	T fnMax();
	T fnMin();
	void fnInput()
	{
		cout<<"输入3个数：";
		cin>>x>>y>>z;
	}
};

template <class T>   //成员函数的定义
T CValue<T>::fnMax()
{
	T max;
	max = x>y?x:y;
	max = max>z?max:z;
	return max;
}
template <class T>   //成员函数的定义
T CValue<T>::fnMin()
{
	T min;
	min = x<y?x:y;
	min = min<z?min:z;
	return min;
}

void main()
{
	CValue<int> p1;               //相当于把int代回模板中T的位置
	p1.fnInput ();
	cout<<"max="<<p1.fnMin ()<<",max="<<p1.fnMax()<<endl;
	CValue<double> p2;           //相当于把double代回模板中T的位置
	p2.fnInput ();
	cout<<"max="<<p2.fnMin ()<<",max="<<p2.fnMax()<<endl;
}
