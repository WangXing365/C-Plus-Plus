#include "iostream.h"
int fnAdd(int x, int y);
void main()
{	
	int  a,b;
	a = 5;
	b = 7;
	int c = fnAdd(a,b);   
	cout<<"a+b="<<c<<endl;
}

int  fnAdd(int x, int y)
{
	int z = x+y;
	return z;
}
