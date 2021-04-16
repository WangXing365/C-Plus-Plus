//【例10.5】 从d:\a3.dat文件中读取每一个字符并显示在屏幕上。
#include <fstream.h>
void main()
{
	char ch;
		ifstream inputfile("d:\\a3.dat",ios::in|ios::nocreate);
	if(!inputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	while((ch = inputfile.get()) != EOF)cout<<ch;
	cout<<endl;
	inputfile.close ();
}

