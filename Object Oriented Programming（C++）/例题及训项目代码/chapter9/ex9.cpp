//【例9.9】定义一个类模板，并实例化。
#include <iostream.h>
template <class T>   //指出在类模板中用到的通用数据类型
class Point
{
private:
	T x,y;
public:
	Point(T x,T y){this->x = x;this->y = y;}
	T getX() { return x;}
	T getY() { return y;}
	void display();
};

template <class T>   //成员函数的定义
void Point<T>::display()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}

void main()
{
	Point<int> p1(4,5);           //相当于把int代回模板中T的位置
	p1.display();
	cout<<"x="<<p1.getX ()<<",y="<<p1.getY()<<endl;
	Point<float> p2(40.5F,50.8F); //相当于把float代回模板中T的位置
	p2.display();
	cout<<"x="<<p2.getX ()<<",y="<<p2.getY()<<endl;
}

