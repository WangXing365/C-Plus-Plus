//【例9.11】观察异常的捕捉与处理。
#include <iostream.h>
void main()
{
	int a,b;
	double c;
    cout<<"请输入两个整数：";
	cin>>a>>b;
	try {
		if(b == 0)throw "除数不能为0";
		c = (double)a/b;
        cout<< a<<"/"<<b<<"="<<c<<endl;	
	}	
	catch (char *str)
    {
        cout<<str<<endl;
    }
}
