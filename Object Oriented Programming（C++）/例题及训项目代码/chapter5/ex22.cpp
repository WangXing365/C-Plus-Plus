/*prog2.cpp*/
#include <iostream.h>
extern int fnFact(int n);
void main()
{
	int n,k,p;
	cout<<"ÇëÊäÈënºÍk(n>=k):";
	cin>>n>>k;
	p = fnFact(n)/fnFact(n-k);
	cout<<"p("<<n<<","<<k<<")="<<p<<endl;
}


/*prog1.cpp*/
int  fnFact(int n)
{
	if(n<0)return 0;
	int f=1;
	while(n>1)f *= n--;
	return f;
}
