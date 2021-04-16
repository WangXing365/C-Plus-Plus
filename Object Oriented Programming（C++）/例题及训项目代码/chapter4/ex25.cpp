//【例4.25】 利用结构指针变量访问结构中的成员。
#include "iostream.h"
struct MyTime
{ 	int hour;
		int minute;
		int second;
};
struct MyTime  t ={ 2,34,56};//定义结构变量t，并初始化
void main(void)
{	//① 类似简单变量，定义结构指针变量pt 
		struct MyTime *pt;
		//② 使结构指针pt指向结构变量t 
		pt = &t;
		//③ 用结构指针变量pt间接访问方法，输出结构各成员的值
     cout<<(*pt).hour<<"时"<<(*pt).minute<<"分"<<(*pt).second<<"秒"<<endl;
}

