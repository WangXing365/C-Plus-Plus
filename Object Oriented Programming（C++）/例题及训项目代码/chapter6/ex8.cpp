//【例6.8】 设计一个类，要求能求n个整数中的最大数，n的值为2和3。
class  MyMax 
{
private:                        //注：该位置的private关键字可省略
	int  x, y, z;
public:
    void  Set(int, int, int );  //类的成员函数可以访问类的私有成员x,y,z
	int  Max(int,int );         //重载成员函数 
	int  Max(int,int,int );     //重载成员函数   
};
//类中成员函数的实现：
int MyMax::Max( int a, int b, int c)//求三个整数中的最大数
{
	if (b>a) a = b;
	if (c>a) a = c;
	return a;
}
int MyMax::Max( int a, int b)       //求两个整数中的最大数
{
	if (b>a) return a;
	else     return b;
}
