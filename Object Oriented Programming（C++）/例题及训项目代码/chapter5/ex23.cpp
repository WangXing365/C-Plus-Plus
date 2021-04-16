//【例5.23】不带参数的宏定义的应用。
#include "iostream.h"
#define  PI  3.1415926
void main( )
{   
	float  r, circle, area;
    cout<<"请输入园的半经: ";
    cin>>r;
	circle = 2 * PI * r;//预处理后为:circle = 2 * 3.1415926 * r;
    area   = PI * r * r;//预处理后为:area   = 3.1415926 * r * r;
    cout<<"园周长 = "<< circle<<" 面积 ="<<area<<endl;
}
