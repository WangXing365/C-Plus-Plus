//【例10.7】 写字符串到d:\a7.dat文件中。
#include <fstream.h>
#include <string.h>
void main()
{
	char str[1024];
	strcpy(str,"Hello C++!");
	ofstream outputfile("d:\\a7.dat");
	outputfile.write (str,strlen(str));
	outputfile.close ();
}