/* 【例3.5】 用switch语句编写程序，根据输入的成绩输出相应的A、B、C、D和E等级，
其中A：90～100；B：80～89；C：70～79；D：60～69；E：0～59。*/
#include "iostream.h"
void main()
{	
	int score,temp=-1;
	cout<<"请输入学生成绩："<<endl;
	cin>>score;
	temp=score/10;
	switch(temp)
	{
		case 10: 
		case  9: cout<<"你的等级是A."<<endl;break;
		case  8: cout<<"你的等级是B."<<endl;break;
		case  7: cout<<"你的等级是C."<<endl;break;
		case  6: cout<<"你的等级是D."<<endl;break;
		case 5:  case 4:  case  3:  case 2:  case 1:  case 0:
			cout<<"你的等级是E."<<endl;break;
		default: cout<<"成绩输入有误."<<endl;break;
	}
}
