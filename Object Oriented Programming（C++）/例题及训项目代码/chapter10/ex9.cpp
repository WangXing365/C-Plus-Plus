//【例10.9】将存入d:\a8.dat中的数据读入到数组iData中，并显示出来。
#include  "fstream.h"
void main()
{
	int   iData[10],i;
 	ifstream inputfile("d:\\a8.dat");
	if(!inputfile)
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}

	inputfile.read ((char *)iData,sizeof(int)*10);
	inputfile.close ();
	for(i=0;i<10;i++)
	    cout<<iData[i]<<" "; 
	cout<<endl;
}

