//【例10.4】 从d:\a3.dat文件中读出字符串。程序运行结果如图10-7所示。
	#include <fstream.h>
	void main()
	{
		char str1[80],str2[80];
		ifstream inputfile("d:\\a3.dat",ios::in|ios::nocreate);
		if(!inputfile)
		{
			cout<<"打开文件失败！"<<endl;
			return;
		}
		inputfile>>str1>>str2;
		cout<<str1<<" "<<str2<<endl;
		inputfile.close ();
	}
