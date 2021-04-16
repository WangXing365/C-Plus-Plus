//【例4.17】结构体数组的引用。
#include "iostream.h"
#define  N     3
struct Student
{ 
	long   no;		 //学号
 char   name[16];	 //姓名
	int    age;         //年龄
	int    score;       //成绩
};
void main()
{    
    int i;
    struct Student stu[N];  //①定义结构体类型数组
    for (i = 0; i<N; i++)   //②输入学生的信息，存储在结构数组中
    {     
        cout<<"输入第"<<i+1<<"学生信息(学号,姓名,年龄,成绩):";
        cin>>stu[i].no>>stu[i].name>>stu[i].age>>stu[i].score;
    }
    cout<<"学生的信息如下：\n";
    for (i = 0; i<N; i++)    //③输出学生信息
	{
		cout<<stu[i].no<<"\t"<<stu[i].name<<"\t";
	    cout<<stu[i].age<<"\t"<<stu[i].score<<endl;
	}
}
