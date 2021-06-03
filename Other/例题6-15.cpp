#include<iostream>
#include<string.h>
using namespace std;
class  point{
	int x,y;
public:
	point(int a=0,int b=0) //缺省构造函数
	{
		x=a;
		y=b; 
	}
	point(point &p); //拷贝构造函数原型声明
	~point() //析构函数定义、
	{
		cout<<x<<","<<y;
		cout<<"析构函数被执行！\n";
	}
		void show();
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
};
point::point(point &p) //拷贝构造函数定义
{
	x=p.x;
	y=p.y;
	cout<<x<<","<<y<<"拷贝构造函数被执行！\n";
}
void point::show(){
	cout<<"点："<<x<<","<<y<<"\n";
}
int main(){
	point p1(6,8),p2(4,7);
	point p3(p1); //注：A行
	point p4=p2; //注：B行
	p1.show();
	p2.show();
	p3.show();
	p4.show(); 
} 
