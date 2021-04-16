//项目2：最大值类模板
#include <iostream.h>
template <class T>
class maxElem
{
	T *a;
	int size;
public:
	maxElem(T *array=NULL,int n=0)
	{
		size = n;
		if(size>0)
		{
			a = new T[size];
			for(int i=0;i<size;i++)a[i] = array[i];
		}
		else  a = NULL;
	}
	T maxValue()
	{
		T max = a[0];
		for(int i=1;i<size;i++)if(max<a[i])max = a[i];
		return max;
	}
		~maxElem(){if(a)delete[]a;}
};
 void main()
 {
	int iA[10]   = {1,2,0,44,5,8,90,45,67,98};
	double fB[6] = {4.5,7.8,78.9,4.0,6.7,10.9};
	maxElem<int>k1(iA,10);  //A,定义类对象时，给出虚拟类型的实际类型int
	maxElem<double>k2(fB,6);//B,定义类对象时，给出虚拟类型的实际类型double
	cout<<"整型数组中最大值是："<<k1.maxValue()<<endl;
	cout<<"实型数组中最大值是："<<k2.maxValue()<<endl;
 }
