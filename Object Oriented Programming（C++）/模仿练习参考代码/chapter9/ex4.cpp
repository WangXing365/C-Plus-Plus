/*
1．为T类型的数组设计一个类模板，对所有元素求和、查找指定元素是否存在，
   如存在，则返回所在数组元素的下标，否则返回-1.
*/
#include <iostream.h>
template <class T1,class T2>   //指出在类模板中用到的通用数据类型
class MyArray
{
private:
	T1 a[20];
	T2  num;

public:
	MyArray(T1 *x,T2  n)
	{  
		for(int i=0;i<n;i++)
	 	   a[i] = x[i];
	    this->num = n;
	}
	T1  fnSum();
    T2	fnJuge(T1  x);
};

template <class T1,class T2>   //成员函数的定义
T1 MyArray<T1,T2>::fnSum()
{
	T1   s;
	int i;
	for(i=0,s=0;i<num;i++)
		s += a[i];
	return s;
}
template <class T1,class T2>   //成员函数的定义
T2	MyArray<T1,T2>::fnJuge(T1  x)
{
	T2  i;
     for(i=0;i<this->num;i++)
		if(x == this->a[i])return  i;
	 return (-1);
}
void main()
{
	int  a[]={1,2,3,4,5,6};
	MyArray<int,int> p1(a,6);              //相当于把int代回模板中T1,T2的位置

	cout<<"sum="<<p1.fnSum()<<endl;
	cout<<"5在数组元素的下标="<<p1.fnJuge(5)<<endl;

	double  b[]={1.5,2.5,3.5,4.0,5.0,6.0};
	MyArray<double,int> p2(b,6);           //相当于把int代回模板中T2的位置
									       //把double代回模板中T1的位置


	cout<<"sum="<<p2.fnSum()<<endl;
	cout<<"2.5在数组元素中下标="<<p2.fnJuge(2.5)<<endl;
	cout<<"12.5在数组元素中下标="<<p2.fnJuge(12.5)<<endl;
}
