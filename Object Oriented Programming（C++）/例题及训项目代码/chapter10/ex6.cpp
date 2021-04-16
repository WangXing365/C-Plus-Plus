//【例10.6】 文本文件的复制。
#include <fstream.h>
void main()
{
	char ch;
	ifstream inputfile("d:\\a3.dat",ios::in|ios::nocreate); //打开读文件
	if(!inputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	ofstream outputfile("d:\\a6.dat",ios::out|ios::trunc);//打开写文件
	if(!outputfile)
	{
		cout<<"打开文件失败！"<<endl;
		outputfile.close ();          				 //关闭已打开的读文件
		return;
	}
	while((ch = inputfile.get()) != EOF)outputfile.put(ch);
	cout<<"文件复制成功！"<<endl;
	inputfile.close();								 //关闭已打开的读文件
	outputfile.close();								 //关闭已打开的写文件
}
