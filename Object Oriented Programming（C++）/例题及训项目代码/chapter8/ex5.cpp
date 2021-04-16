//【例8.5】 分析以下程序的执行结果。
#include <iostream.h>
#define  PI    3.14159
class  shapes   				//抽象类shapes
{
protected:
     int x,y;
public:
     void setvalue (int d , int w=0){x=d;y=w;}
     virtual  void disp( )=0;    //纯虚函数
};
class  square:  public shapes
{
public:
    void disp( )
    {
     cout <<"矩形面积："<<x*y <<endl;
    }
};
class  circle: public shapes
{
public:
	void disp( )
	{
		cout<<"圆面积: " <<PI*x*x<<endl;
	}
};

void  main ( ) 
{
	shapes *ptr[2];         //定义对象指针数组
    square s1;              //定义对象s1
    circle c1;              //定义对象c1    
    ptr[0]=& s1;            //ptr[0]指向s1
    ptr[0]->setvalue(10,5); //相当于s1.setvalue(10,5)
    ptr[0]->disp( );        //相当于s1.disp()
    ptr[1]=&c1;             //ptr[1]指向c1
    ptr[1]->setvalue(10);  //相当于c1.setvalue(10)
    ptr[1]->disp( );       //相当于c1.disp()
}
