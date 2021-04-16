/*
	创建一个教师（CTeacher）,包括工号、职称和薪金，编程输入和显示教师的信息。
	建立一个人类（CPerson）,包含姓名、性别和年龄，并作为教师类的基类。
*/
#include "iostream.h"

class CPerson
{
protected:
	char name[10];              //姓名
	char sex[2];				//性别
	int age;				    //年龄
};
class CTeacher: public CPerson
{
	long  no;				   //工号
	char  position[10];          //职称
	int   monthMoney;	       //薪金
public:
	void DataInput();		   //输入教师的信息
	void Display();            //显示教师的信息
};

void CTeacher::DataInput()	   //输入教师的信息
{
    cout<<"输入姓名、性别和年龄:";
	cin>>name>>sex>>age;
	cout<<"输入工号、职称和薪金:";
	cin>>no>>position>>monthMoney;
}

void CTeacher::Display()            //显示教师的信息
{
    cout<<"教师信息如下：\n";
	cout<<"姓名:"<<name<<",性别:"<<sex<<",年龄:"<<age<<endl;
	cout<<"工号:"<<no<<"、职称:"<<position<<",薪金:"<<monthMoney<<endl;
}

void main()
{
	CTeacher  t;
	t.DataInput ();
	t.Display ();
}
