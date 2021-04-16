//【例9.7】函数模板的重载。
#include <iostream.h>
template <class T>
T  fnMax(T x,T y)            //函数模板 
{
	cout<<"模板函数fnMax(T,T)!, ";
	return x>y?x:y;
}
template <class T>
T  fnMax(T x,T y,T z)        //重载函数模板   
{
	T max;
	cout<<"模板函数fnMax (T,T,T)!, ";
	max = fnMax(x,y);
	return fnMax(max,z);
}
int  fnMax(int x,int y)      //普通函数重载函数模板
{
	cout<<"模板函数fnMax (int,int)!, ";
	return  x>y?x:y;
}
int  fnMax(int x,char y)     //普通函数重载函数模板
{
	cout<<"模板函数fnMax (int,char)!, ";
	return  x>y?x:y;
}

void main()
{
	char  c = 'a';
	int   i  = 10;
	double f = 100.8;
	cout<<"fnMax("<<c<<")="<<fnMax(c,c)<<endl;
	cout<<"fnMax("<<i<<")="<<fnMax(i,i)<<endl;
	cout<<"fnMax("<<f<<")="<<fnMax(f,f)<<endl;
	cout<<"fnMax("<<i<<","<<c<<")="<<fnMax(i,c)<<endl;
	cout<<"fnMax("<<c<<","<<i<<")="<<fnMax(c,i)<<endl;
	cout<<"fnMax("<<f<<","<<i<<")="<<fnMax(f,i)<<endl;
	cout<<"fnMax("<<i<<","<<f<<")="<<fnMax(i,f)<<endl;
}
