//【例6.21】类成员函数作为友元函数。
	#include "iostream.h"
	#include "string.h"
	class Student;			 //前向引用声明，定义在后面
	class Teacher
	{
	private:
		int bh;                   
		char name[10];
	public:
		Teacher(int h,char n[])
		{
			bh = h;
			strcpy(name,n);
		}
		void display()
		{
			cout<<"编号:"<<bh<<endl;
			cout<<"姓名:"<<name<<endl;
		}
		void modify_stu(Student &,float);//Teacher类中的成员函数
	};
	class Student
	{
	private:
		int id;
		float score;
	public:
		Student(int xh,float s)
		{
			id = xh;
			score = s;
		}
		void display()
		{
			cout<<"学号: "<<id<<endl;
			cout<<"成绩: "<<score<<endl;
		}
		//声明Teacher类中的成员函数为Student类的友元函数
		friend void Teacher::modify_stu(Student &,float);
	};
	void Teacher::modify_stu(Student &c,float s)
	{
		c.score = s;
	}
	void main()
	{
		Teacher t1(1000,"张三");
		Student c(1022,75);
		c.display ();
		t1.modify_stu (c,80);
		c.display ();
	}
