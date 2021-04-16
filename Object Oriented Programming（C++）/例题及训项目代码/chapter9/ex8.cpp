//【例9.8】定义一个类模板。
template <class T>   //指出在类模板中用到的通用数据类型
class Point          //点类模板
{
private:
	T x,y;
public:
	Point(T x,T y){this->x = x;this->y = y;}
	T getX() { return x;}
	T getY() { return y;}
	void display();
};
template <class T>      //成员函数的定义
void Point<T>::display()
{
	Cout<<"("<<x<<","<<y<<")"<<endl;
}
