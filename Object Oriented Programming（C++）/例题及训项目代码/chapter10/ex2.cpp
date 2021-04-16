//【例10.2】 顺序读出并显示例10.1写入到文件d:\a1.dat中的整数
#include <fstream.h>
void main()
{
	int x,y,z;
	ifstream inputfile("d:\\a1.dat",ios::in|ios::nocreate); //利用构造函数打开文件
	if(!inputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	inputfile>>x>>y>>z; 					//利用流运算符">>"读数据
	cout<<x<<" "<<y<<" "<<z<<endl;
	inputfile.close ();               		//关闭文件
}

