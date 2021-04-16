//修改程序，用穷举法求解"猴子吃桃子"问题。
#include "iostream.h"
int fn(int init,int n)
{
     int s=init;
	 while(n)
	 {
		 s = 5*s+1;
		 n--;
	 }
	 return s;
}

void main()
{    
 	cout<<"最少有"<<fn(6,4)<<"个桃子。"<<endl;
}
