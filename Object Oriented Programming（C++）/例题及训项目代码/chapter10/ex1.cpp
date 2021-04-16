/**********************************
*   write data to file a1.dat     *  
**********************************/
//【例10.1】 将3个整数写入d:\\a1.dat文件中。
#include <fstream.h>
void main()
{
	ofstream outfile("d:\\a1.dat");
	if(!outfile)//检查文件是否打开
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	outfile<<245<<" "<<290<<" "<<1000;
	outfile.close ();//关闭文件
}
