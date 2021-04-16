/*
将例10.10的结果文件data.bin内容读出来，并显示在屏幕上，以验证其正确性。
*/
#include "iostream.h"
#include <fstream.h>
void main()
{
	int a[100],n=0;
	ifstream infile("d:\\data.bin",ios::in|ios::binary);
	if(!infile)
	{
		cout<<"打开文件d:\\data.bin失败！"<<endl;
		return;
	}
	infile.read((char *)&n,sizeof(int));  				 //B
	cout<<n<<" ";
	infile.read ((char *)a,n*sizeof(int));				 //C
	infile.close ();
	for(int i=0;i<n;i++)//显示在屏幕上
	{ cout<<a[i]<<" ,";}

}
