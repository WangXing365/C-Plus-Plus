//【例5.20】应用math.h中定义的sin()函数，求0.05到л/4之间的正弦函数值。
#include  "iostream.h"
#include  "math.h"
void main()
{
	double  pi=3.14,x=0.05;
	int i = 1;
	while(x<pi/4)
	{	cout<<"sin("<<x<<")="<<sin(x)<<"\t";
		x = x + 0.1;				//步长取0.1
		i++;
		if(i%2)cout<<endl;			//2个数一行
	}
}

