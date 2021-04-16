/*修改例4.26, 用函数实现结构数组的输出。
 【例4.26】 利用指向结构数组的指针来访问结构数组。
 */
#include "iostream.h"
struct Student 
{
	char   name[16];
	char   sex;
	int    score;
};
void fnPrint(struct Student  stu[])
{
	struct Student  *p;
 	for(p=stu;p<stu+3;p++)
      cout<<p->name<<" "<<p->sex<<" "<<p->score<<endl;
}

void main()
{
	struct Student stu[3]={	{"zhan",'M',100},{"LiSi",'F',67},{"wang",'M',90}};
    fnPrint(stu);
}

