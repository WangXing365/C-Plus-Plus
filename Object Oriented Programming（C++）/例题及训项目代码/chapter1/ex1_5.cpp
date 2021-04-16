//【例1-5】 演示不同进制的输入/输出流的使用方法。
#include "iostream.h"
void main()
{
	int a,b,c;
	cin >> hex >> a;      //指明输入为十六进制数
	cin >> oct >> b;      //指明输入为八进制数
	cin >> dec >> c;      //指明输入恢复为十进制数
	cout<< dec << "a="<< a <<'\t'<<"b="<< b<< '\t'<<"c="<< c << endl;
	cout<< oct << "a="<< a <<'\t'<<"b="<< hex << b<< '\t'<<"c="<< c << endl;
}
