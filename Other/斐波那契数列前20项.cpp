#include<iostream>
using namespace std;
int main()
{
	int i;
	long f1=1L,f2=1L;
	for(i=1;i<=10;i++)
	{cout<<f1<<"\t"<<f2<<"\t";
		f1=f1+f2;
		f2=f1+f2;
		
	}
}
