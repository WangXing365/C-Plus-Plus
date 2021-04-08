#include<iostream>
using namespace std;
int main()
{
	int Sum,i;
	Sum=0;
	i=1;
	while(i<=100)
	{
		Sum+=i;
		i+=2;
	}
	cout<<"Sum is "<<Sum<<endl;
}
