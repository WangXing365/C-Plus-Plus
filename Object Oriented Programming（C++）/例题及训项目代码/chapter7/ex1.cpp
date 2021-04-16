//【例7.1】 先定义Person类，然后定义Person类的派生类Student。
class Person
{
	char name[10];              //姓名
	int age;				    //年龄
public:
	void show();
};
class Student: public Person
{
	long no;				   //学号
	int  eScore, mScore;	   //英语成绩、数学成绩
public:
	void calSum();			   //计算总成绩
};
