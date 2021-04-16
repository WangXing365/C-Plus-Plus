//【例6.26】 this指针的使用。
#include  <iostream.h>
class Sample
{
	int x,y;
public:
	Sample(int a=0,int b=0)
	{  
		this->x = a;               //等价于x = a;
		this->y = b;               //等价于y = b;
	}
	void Display()
	{
		cout<<this<<"\t";  				//E ,输出当前对象的地址
		cout<<this->x<<"\t"<<this->y<<"\n";  //输出当前对象的数据成员x,y
	}
};
void main()
{  
	Sample c1(1,4),c2(3,7);
	cout<<&c1<<endl;        				 //A, 输出对象c1的地址
	c1.Display();            				 //B, 调用对象c1的成员函数
	cout<<&c2<<endl;        				 //C, 输出对象c2的地址
	c2.Display();          					 //D, 调用对象c2的成员函数
}
