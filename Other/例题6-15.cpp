#include<iostream>
#include<string.h>
using namespace std;
class  point{
	int x,y;
public:
	point(int a=0,int b=0) //ȱʡ���캯��
	{
		x=a;
		y=b; 
	}
	point(point &p); //�������캯��ԭ������
	~point() //�����������塢
	{
		cout<<x<<","<<y;
		cout<<"����������ִ�У�\n";
	}
		void show();
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
};
point::point(point &p) //�������캯������
{
	x=p.x;
	y=p.y;
	cout<<x<<","<<y<<"�������캯����ִ�У�\n";
}
void point::show(){
	cout<<"�㣺"<<x<<","<<y<<"\n";
}
int main(){
	point p1(6,8),p2(4,7);
	point p3(p1); //ע��A��
	point p4=p2; //ע��B��
	p1.show();
	p2.show();
	p3.show();
	p4.show(); 
} 
