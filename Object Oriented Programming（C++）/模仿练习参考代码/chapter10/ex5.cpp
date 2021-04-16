/*
2. 输入若干个学生信息，保存到指定磁盘文件中，然后要求将奇数条学生信息从磁盘中读入并显示在屏幕上。
   要求用结构体类型描述学生信息，并用函数实现各功能。
*/
#include "iostream.h"
#include "fstream.h"
#include "string.h"
#define   NUM      6
class  Student
{
	long  no;
	char  name[16];
	int   age; 
	int   score; 
public:
	Student(){}
	Student(long n,char na[],int a,int s)//构造函数
	{
		no=n;
		strcpy(name,na);
		age = a;
		score = s;
	}
	void set(int n,char na[],int a,int s)
	{
		no = n;
		strcpy(name,na);
		age = a;
		score = s;
	}
	void disp()
	{
		cout<<"  "<<no<<","<<name<<","<<age<<","<<score<<endl;
	}
};
void DataInput(Student a[])
{
	long  no;
	char  name[16];
	int   age,score; 
	for(int i=0;i<NUM;i++)
	{
		cout<<"请输入学生"<<i+1<<"的信息（学号，姓名，年龄和成绩）:\n";
		cin>>no>>name>>age>>score;
		a[i].set(no,name,age,score);
	}
}
void main()
{
	ofstream outfile("d:\\sdata.dat",ios::out|ios::binary);
	if(!outfile)
	{
		cout<<"打开文件d:\\sdata.dat失败！"<<endl;
		return;
	}
	Student  s[NUM];
	DataInput(s);
	for(int i=0;i<NUM;i++)
	  outfile.write ((char *)&s[i],sizeof(s[i]));//将NUM个学生对象分别写入文件
	outfile.close();

	ifstream inputfile("d:\\sdata.dat",ios::in|ios::binary);
	if(!inputfile)
	{
		cout<<"打开文件d:\\sdata.dat失败！"<<endl;
		return;
	}
	
	cout<<"--从文件中读出奇数条学生数据--\n";
	Student  t;
	inputfile.seekg(0L,ios::beg);
	inputfile.read ((char *)&t,sizeof(t));
	while(!inputfile.eof ())   				//A
	{
		t.disp ();
	    inputfile.seekg(sizeof(t),ios::cur);
		inputfile.read ((char *)&t,sizeof(t));
	}
	inputfile.close ();
}
