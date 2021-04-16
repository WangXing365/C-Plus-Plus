#include<iostream>
using namespace std;
int main()
{
	int i,x,y,z;
	for(i=100;i<1000;i++)
	{
		x=i/100;
		y=(i/10)%10;
		z=i%10;
		if(i==x*x*x+y*y*y+z*z*z)
		cout<<i<<"\t";
	}
}
