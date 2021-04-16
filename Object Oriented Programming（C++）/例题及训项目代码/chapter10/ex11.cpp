//【例10.11】 从例10.6中生成的d:\a8.dat文件中，读出第6个整数。
#include  "fstream.h"
void main()
{
	int   x;
	ifstream inputfile;
	inputfile.open ("d:\\a8.dat");
	if(!inputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
    inputfile.seekg(5*sizeof(int),ios::beg);// 输入流指针定位到第6个数的位置，
    inputfile.read ((char *)&x,sizeof(int));
    inputfile.close ();
    cout<<x<<endl;
}
