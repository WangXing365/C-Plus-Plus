/*
  先用windows记事本程序创建一个文件s.txt，并录入一些英文单词。
  然后编程统计文件s.txt中大写字符的个数。要求用输入/输出流类的成员函数实现。
*/
#include <fstream.h>
void main()
{
	char ch;
	int sum=0;
	ifstream inputfile("d:\\s.txt",ios::in|ios::nocreate); //打开读文件
	if(!inputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}

	while((ch = inputfile.get()) != EOF)
	{	if(ch >='A' && ch <='Z')sum++;
	}
	cout<<"文件s.txt中大写字符的个数="<<sum<<endl;
	inputfile.close();								 //关闭已打开的读文件
}
