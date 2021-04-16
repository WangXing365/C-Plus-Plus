//【例4.18】 初始化结构数组，并输出学生信息。
#include "iostream.h"
struct Student
{ 
	long   no;			//学号
    char   name[16];	     //姓名
	int    age;         	//年龄
	int    score;      	//成绩
};
void main()
{    struct Student stu[] ={ {2013001,"ZhanSa", 17,80},
                            {2013002,"WangWu", 19,85},
                            {2013003,"LiShin", 16,75},
                            {2013004,"LaoQin", 20,60} };
   	for(int i = 0; i<4; i++)
     {  
        cout<<"第"<<i+1<<"个学生：";
        cout<<"学号:"<<stu[i].no;
        cout<<"姓名:"<<stu[i].name;
        cout<<"年龄:"<<stu[i].age;
        cout<<"成绩:"<<stu[i].score<<endl;
     }
}
