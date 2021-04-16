//【例10.8】 从键盘输入10个整数，并存储在磁盘文件d:\a8.dat中。
#include  "fstream.h"
void main()
{
	int  iData[10],i;
	cout<<"请输入10个整数：";
	for(i=0;i<10;i++)
	   cin>>iData[i];          					//输入10个整数存储在数组iData中
	ofstream outputfile("d:\\a8.dat");			//用构造函数打开文件
	if(!outputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	outputfile.write ((char *)iData,sizeof(int)*10);//写数据
	outputfile.close ();						//关闭文件
}
