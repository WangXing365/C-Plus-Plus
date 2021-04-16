//【例7.13】编写一个程序，实现学院教师（兼职教师）的数据操作...
#include <iostream.h> 
#include <string.h>
class person
{ 
	int bh;      //编号
	char xm[10]; //姓名
public: 
	void setperson(int bh1,char xm1[])
	{  
		bh= bh1;
		strcpy(xm,xm1);
	}
	void dispperson()
	{
		cout<<"编号："<<bh<<endl;
		cout<<"姓名："<<xm<<endl;
	}
};
class  teacher : virtual public person 
{  
	char xb[20];   //所在系
	char zc[10];   //职称
public: 
	void setteacher(char xb1[],char zc1[])
	{
		strcpy(xb,xb1); strcpy(zc,zc1);
	} 
	void dispteacher()
	{
		cout<<"系别："<<xb<<endl;
		cout<<"职称："<<zc<<endl;
	}
};                                                      
class enginner : virtual public person 
{  
	char ks[20];   //科室
	char zy[10];   //专业
public: 
	void setenginner(char ks1[],char zy1[])
	{
		strcpy(ks,ks1); strcpy(zy,zy1);
	} 
	void dispenginner()
	{
		cout<<"科室："<<ks<<endl;
		cout<<"专业："<<zy<<endl;
	}
};  
class teachengi : public teacher, public enginner
{ public:
	void setteachengi(int bh1,char xm1[],char xb1[],char zc1[],char ks1[],char zy1[])
	{  
		setperson(bh1,xm1);
	    setteacher(xb1,zc1);
		setenginner(ks1,zy1);
	}
	void dispteachengi()
	{
		dispperson();
		dispteacher();
		dispenginner();
	}
};
void main()
{   
	teachengi  obj;             //定义D的对象od
    obj.setteachengi(129,"张山","软件工程系","教授","计算机","数据库"); 
    obj.dispteachengi();
}
