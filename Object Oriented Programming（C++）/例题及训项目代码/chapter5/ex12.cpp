//【例5.12】 求一维数组元素的最大值。
 #include "iostream.h"
 int fnMax(int *arry,int n);
 void main()
 {
     int a[]={13,56,66,90,65,78};
     int Max;
		Max = fnMax(a,6);
		cout<<"最大值="<<Max<<endl;
 }
	int fnMax(int *arry,int n)
	{
		int i,iMax, *p;
	p = arry;
	iMax = *p;
	for(i=1,p++;i<n;i++,p++)
		if(*p>iMax)iMax = *p;
	return iMax;
	}

