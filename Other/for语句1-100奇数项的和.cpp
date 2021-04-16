#include<iostream>
using namespace std;
int main()
{
	int Sum,i;
	Sum=0;
	for(i=1;i<=100;i=i+2)
	{
		Sum+=i;
	}
	cout<<"Sum is "<<Sum<<endl;
	system("pause");
}
