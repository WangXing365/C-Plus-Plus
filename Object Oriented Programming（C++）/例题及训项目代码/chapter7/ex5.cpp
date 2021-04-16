//【例7.5】派生类构造函数的定义方法。
#include  "iostream.h"
#include  "string.h"
class CPerson            //基类
{
	char pName[20];      //姓名
	char pID[20];        //学号
	bool bMan;           //性别：false表示女，true表示男
public:
	CPerson(char *name, char *id,bool isman=true) //构造函数
	{
		strcpy(pName,name);
		strcpy(pID,id);
		bMan = isman;
	}
	void Output()
	{
		cout<<"姓名："<<pName<<endl;
		cout<<"学号："<<pID<<endl;
		char *str = bMan?"男":"女";
		cout<<"性别："<<str<<endl;
	}
};
class CStudent: public CPerson  //派生类
{
	float dbScore[3];          	//3门成绩
	char  department[20];     	//部门
public:
	CStudent(char *name, char *id,bool isman,char *dp):CPerson(name,id,isman)
	{
		strcpy(department,dp);
	}
	void InputScore(float score1,float score2,float score3)
	{
		dbScore[0]=score1;
		dbScore[1]=score2;
		dbScore[2]=score3;
	}
	void Print()
	{
		Output();               //调用基类成员函数
		cout<<"系部："<<department<<endl;
		for(int i=0;i<3;i++)
			cout<<"成绩"<<i+1<<": "<<dbScore[i]<<",";
		cout<<endl;
	}
};
void  main()
{
	CStudent stu("张  芳","20130129",false,"计算机系");
	stu.InputScore (80,75,89);
	stu.Print ();
}
