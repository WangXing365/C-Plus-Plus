//【例5.13】 编写一个显示结构成员的函数。在函数调用时，用指向结构的指针变量作实参。
#include "iostream.h"
struct MyTime
{ 	int hour;
	int minute;
	int second;
};
void  fnPrint(struct MyTime  *p)
{ 
	   cout<<p->hour<<"时"<<p->minute<<"分"<<p->second<<"秒"<<endl;
}
void main(void)
{
	struct MyTime *pt,t ={ 2,34,56};
	pt = &t;
	fnPrint(pt) ;
}

