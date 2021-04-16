/*
	先用windows记事本程序创建一个文件s.txt，并录入10个英文单词。
	然后编程统计文件s.txt中小写字符的个数。
*/
	#include <fstream.h>
	void main()
	{
		char str[80];
		int i,k,sum=0;
		ifstream inputfile("d:\\s.txt",ios::in|ios::nocreate);
		if(!inputfile)
		{
			cout<<"打开文件失败！"<<endl;
			return;
		}
		for(i=0;i<10;i++)
		{
			inputfile>>str;
			k=0;
			while(str[k])
			{	if(str[k]>='a' && str[k]<='z') sum++;
				k++;
			}
		}
		cout<<"文件s.txt中小写字符的个数="<<sum<<endl;
		inputfile.close ();
	}
