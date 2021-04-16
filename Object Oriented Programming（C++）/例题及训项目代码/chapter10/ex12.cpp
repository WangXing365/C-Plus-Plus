//【例10.12】 文件的随机读写。
#include "iostream.h"
#include "fstream.h"
#include "string.h"
class  Student
{
	long  no;
	char  name[16];
	int   age; 
	int   score; 
public:
	Student(){}
	Student(int n,char na[],int a,int s)//构造函数
	{
		no=n;
		strcpy(name,na);
		age = a;
		score = s;
	}
	void disp()
	{
		cout<<"  "<<no<<","<<name<<","<<age<<","<<score<<endl;
	}
};
void main()
{
	ofstream outfile("d:\\sdata.dat",ios::out|ios::binary);
	if(!outfile)
	{
		cout<<"打开文件d:\\sdata.dat失败！"<<endl;
		return;
	}
	Student  s1(2013001,"张三",17,89); //创建第1个学生对象
	Student  s2(2013002,"王五",22,79); //创建第2个学生对象
	Student  s3(2013003,"刘六",19,59); //创建第3个学生对象
	Student  s4(2013004,"李四",20,90); //创建第4个学生对象
	outfile.write ((char *)&s1,sizeof(s1));//将4个学生对象分别写入文件
	outfile.write ((char *)&s2,sizeof(s2));
	outfile.write ((char *)&s3,sizeof(s3));
		outfile.write ((char *)&s4,sizeof(s4));
	Student  s(2013003,"刘六",18,59);// 创建第5个学生对象s
	outfile.seekp (2*sizeof(s),ios::beg);//流指针从文件头位置向后移动2个学生对象字节数
	outfile.write ((char *)&s,sizeof(s));//将写入文件，修改了原文件中的第三个学生对象
	outfile.close();				   //关闭文件
	ifstream inputfile("d:\\sdata.dat",ios::in|ios::binary);
	if(!inputfile)
	{
		cout<<"打开文件d:\\sdata.dat失败！"<<endl;
		return;
	}
	
	cout<<"--从文件中读出第3个学生数据--\n";
	Student  t;
	inputfile.seekg(2*sizeof(t),ios::beg);
	inputfile.read ((char *)&t,sizeof(t));
	t.disp();
    cout<<"---从文件中读出全部的数据----\n";
	inputfile.seekg(0L,ios::beg);
	inputfile.read ((char *)&t,sizeof(t));
	while(!inputfile.eof ())   				//A
	{
		t.disp ();
		inputfile.read ((char *)&t,sizeof(t));
	}
	inputfile.close ();
}
