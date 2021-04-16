/*【例3.3】 编写一个if多分支结构的程序，将成绩的百分制转换为等级制。
百分制与等级制的对应关系如下：90～100分对应A级、80～89对应B级、
70～79对应C级、60～69对应D级、0～59对应E级。*/
#include "iostream.h"
void main()
{
   	int iScore;
    cout<<"请输入考试成绩: ";
    cin>>iScore;
    if(iScore>= 90 && iScore<=100)
	   cout<<"你成绩的等级是A."<<endl;
    else if(iScore>= 80 && iScore<=89)
        	   cout<<"你成绩的等级是B."<<endl;
    else if(iScore>= 70 && iScore<=79)
            cout<<"你成绩的等级是C."<<endl;	 
    else if(iScore>= 60 && iScore<=69)
            cout<<"你成绩的等级是D."<<endl;  	 
    else if(iScore>= 0 && iScore<=59)
            cout<<"你成绩的等级是E."<<endl; 	 
    else  cout<<"无效成绩!!"<<endl;
}
