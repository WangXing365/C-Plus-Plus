//【例10.3】 将字符串"Good morning!"写入d:\a3.dat文件中。
#include <fstream.h>
void main()
{
	ofstream outfile("d:\\a3.dat",ios::out|ios::trunc); //利用构造函数打开文件
	if(!outfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	outfile<<"Good morning!";			 //利用流运算符"<<"写字符串到流对象
	outfile.close();					 //关闭文件
}
