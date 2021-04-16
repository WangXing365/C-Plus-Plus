/*【例10.10】 用记事本创建一个文本文件data.txt，并存储若干个整数。
然后编写一个程序将其中的整数读出并写到二进制文件data.bin中。
二进制文件data.bin中的第一个数必须是其后整数的个数。*/
#include "iostream.h"
#include <fstream.h>
void main()
{
	int a[100],n=0;
	ifstream inputfile("d:\\data.txt",ios::in|ios::nocreate);
	if(!inputfile)
	{
		cout<<"打开文件d:\\data.txt失败！"<<endl;
		return;
	}
	while(!inputfile.eof ()) 							  //A
		inputfile>>a[n++];
	inputfile.close ();
	ofstream outfile("d:\\data.bin",ios::out|ios::binary);
	if(!outfile)
	{
		cout<<"打开文件d:\\data.bin失败！"<<endl;
		return;
	}
	outfile.write ((char *)&n,sizeof(int));  				 //B
	outfile.write ((char *)a,n*sizeof(int));				 //C
	outfile.close ();
}
