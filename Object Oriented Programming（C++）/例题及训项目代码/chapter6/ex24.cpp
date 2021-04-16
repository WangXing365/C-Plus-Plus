//【例6.24】 使用动态数组。
#include <iostream.h>
void main()
{  
	int *p,n,i;
	cout<<"请输入数组元素个数：";
	cin>>n;
	p = new int[n]; 
	cout<<"请输入"<<n<<"个数组元素值：";
	for(i=0;i<n;i++)cin>>p[i];
	for(i=0;i<n;i++)cout<<*(p+i)<<"\t";
	cout<<endl;
	delete []p;
}
