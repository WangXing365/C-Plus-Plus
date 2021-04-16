/*
   设计一个抽象类Change提供统一接口，
   根据此类派生出几个子类完成从华氏温度到摄氏温度的转换，
   磅值到毫米的转换等。
*/
#include <iostream.h>

class  Change   				//抽象类Change
{
public:
     virtual  float chan(float )=0;    //纯虚函数
};

class  FtoCChange: public Change //华氏温度到摄氏温度的转换
{
public:
    float chan(float f )
    {
       return (f-32.0F)*5.0F/9.0F;
    }
};

class  PtoMChange: public Change//磅值到毫米的转换
{
public:
	float chan(float p )
	{
		return p/2.845F;
	}
};

void  main ( ) 
{
	Change *p;         //定义对象指针数组
    FtoCChange s1;     //定义对象s1
    PtoMChange s2;     //定义对象s2    
    p=& s1;            //p指向s1
    cout<<p->chan (40.5F)<<endl;
	p=& s2;            //p指向s2
    cout<<p->chan (30.5F)<<endl;
}
