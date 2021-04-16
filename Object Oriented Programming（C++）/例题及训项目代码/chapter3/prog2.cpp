//项目2：趣味古典数学问题
#include  "iostream.h"

void main()
{ 
	int  i;
  	long  f,f1 = 1L,f2 = 1L;
	cout<<f1<<"\t"<<f2<<"\t";
	for(i=3;i<=18;i++)
	{ 
		f = f1+f2;                  //由前两项的f1,  f2求得当前项f
		cout<<f<<"\t";              //输出f
	    if(i%6 == 0)cout<<"\n";		//每行限输出6个fibonacci数
	    f1 = f2;	
		f2 = f;                     //修改f1，f2的值，被下次循环递推
	}
}
