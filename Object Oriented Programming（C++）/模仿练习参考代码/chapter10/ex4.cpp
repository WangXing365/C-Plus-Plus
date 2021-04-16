/*
1. 将Fibonacci数列的30项写入二进制文件，然后读出并显示其中的奇数项，且每行显示5个数。
*/
#include  "fstream.h"
#define   N     18
void main()
{
	int  iData[N]={0},i,n;
    iData[0]=iData[1] = 1;
	for(i=2;i<N;i++)
	   iData[i]=iData[i-1]+iData[i-2];  
  	ofstream outputfile("d:\\a9.dat");			//用构造函数打开文件
	if(!outputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	outputfile.write ((char *)iData,sizeof(int)*N);//写数据
	outputfile.close ();						//关闭文件

	ifstream inputfile("d:\\a9.dat");
	if(!inputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
    for(i=0;i<N;i+=2)
	{
	   inputfile.read ((char *)&n,sizeof(int));
	   cout<<n<<" ";
	   inputfile.seekg((long)sizeof(int),ios::cur);
	}
	cout<<"\n";
	inputfile.close ();
}
