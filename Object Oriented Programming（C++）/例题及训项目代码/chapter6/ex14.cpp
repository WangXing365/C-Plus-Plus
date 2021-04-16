//【例6.14】 定义一个表示人的基本信息类，包括身份证号、姓名和年龄等信息，利用构造函数初始化数据成员，析构函数做清理工作。
#include <iostream.h>
#include <string.h>
class Person 
{
	char num[20];       			//身份证号码，用数组实现
	char *name;					//姓名，用指针实现
	int  age;						//年龄
public:
	Person(char *,char *,int); //构造函数，省略了参数的变量标识符
	~Person();                       //析构函数，不能有参数
	void show();                     //显示身份号、姓名、性别和年龄
};
Person::Person(char *s1,char *s2,int a)
{	
	strcpy(num,s1);
	name = new char[strlen(s2)+1];
	strcpy(name,s2);
	age = a;
	cout<<"构造函数被执行!\n";
}
Person::~Person()
{
	if(name)delete []name;           //清理工作，释放空间，
	cout<<"析构函数被执行！\n";
}
void Person::show( )
{	
	cout<<"身份证="<<num<<",姓名="<<name;
	cout<<",年龄="<<age<<endl;
}
void main()
{
	Person  P("432801198012242098","张望",28);
	P.show();
}
