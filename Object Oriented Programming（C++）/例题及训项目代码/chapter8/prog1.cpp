//项目1：抽象类的应用实例
#include <iostream.h>
#define  PI    3.1416
class container  						//抽象基类
{
protected:
     double radius;
public:
	 container(double r){container::radius =r;}
     virtual  double surface_area()=0;    //纯虚函数
	 virtual  double volume()=0;          //纯虚函数
};
class cube: public container			//定义正方体类
{
public:
    cube(double r):container(r){}
	double surface_area( )
    {
		return 6*radius*radius;
    }
	double volume( )
    {
       return radius*radius*radius;
    }
};
class sphere: public container		//定义球体类
{
public:
    sphere(double r):container(r){}
	double surface_area( )
    {
       return 4*PI*radius*radius;
    }
	double volume( )
    {
       return PI*radius*radius*radius*4/3;
    }
};
class cylinder: public container 	//定义圆柱体类
{	double height;
public:
    cylinder(double r,double h):container(r)
	{   cylinder::height=h; }
	double surface_area( )
    {
       return 2*PI*radius*(height+radius);
    }
	double volume( )
    {
       return PI*radius*radius*height;
    }
};
void  main() 
{
	container *p;       //定义抽象类指针
    cube  obj1(4);      //创建正方体对象obj1
    sphere obj2(4);     //创建球体对象obj2 
	cylinder obj3(4,5); //创建圆柱体对象obj3
    p=&obj1;            //p指向正方体对象obj1
	cout<<"正方体表面积："<<p->surface_area() <<endl;
	cout<<"正方体体积："<<p->volume () <<endl;
	p=&obj2;            //p指向球体对象obj2
	cout<<"球体表面积："<<p->surface_area() <<endl;
	cout<<"球体体积："<<p->volume () <<endl;
	p=&obj3;            //p指向圆柱体对象obj3
	cout<<"圆柱体表面积："<<p->surface_area() <<endl;
	cout<<"圆柱体体积："<<p->volume () <<endl;
}
