//【例2.3】三种进制表示方法的转换。
#include "iostream.h"
void main()
{
	int x = 1234,y = 01234,z = 0x1234;
	cout<<"  十进制: "<<dec<<"x="<<x<<",y="<<y<<",z="<<z<<endl;//dec:十进制格式符输出
	cout<<"  八进制: "<<oct<<"x="<<x<<",y="<<y<<",z="<<z<<endl;//oct:八进制格式符输出
	cout<<"十六进制: "<<hex<<"x="<<x<<",y="<<y<<",z="<<z<<endl;//hex:十六进制格式符输出
}
