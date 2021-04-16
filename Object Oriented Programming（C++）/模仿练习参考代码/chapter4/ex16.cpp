//修改程序，要求4个侯选人的姓名也要通过键盘输入，然后实现投票和统计操作。
#include "iostream.h"
#include "string.h"
struct candidate 
{ 
	char  name[16];					   //存放候选人姓名
	int   count;					        //存放候选人得票数
};
void fnInput(struct candidate a[],int n)
{
    for(int i=0;i<n;i++)
	{
        cout<<"输入第"<<i+1<<"候选人姓名：";
		cin>>a[i].name ;
		a[i].count =0;
	}

}
void main()
{
	int i,j;
	char  name[16];

	struct candidate leader[4];
	fnInput(leader,4);
	cout<<"开始唱票\n";
	for(i=1;i<= 10;i++)				   //假设共10张票
	{   	cout<<"第"<<i<<"张选票是：";
		cin>>name;                         //唱票:输入候选人姓名
		for(j=0;j<4;j++)                   //每唱一票，相应候选人票数加1
			if(!strcmp(name,leader[j].name))
				leader[j].count++;
	}	
	cout<<"投票结果如下: "<<endl;
	for(j=0;j<4;j++)                        //输出投票结果
		cout<<leader[j].name<<"得票数="<<leader[j].count<<endl;
}
