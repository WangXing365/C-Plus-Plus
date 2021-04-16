/*
1. 输入一组字符，要求分别统计出其中英文字母、数字、空格以及其它字符的个数。
*/
#include <iostream.h>
void main()
{  
	int  i,count1=0,count2=0,count3=0,count4=0;
	char chStr[50];
	cout<<"请输入一个字符串: ";
	cin.getline(chStr,50,'\n');
	for( i=0;chStr[i] != '\0'; i++)     //用串结束标识'\0'控制循环终止
	{   
		if((chStr[i]>='a'&&chStr[i]<='z')||(chStr[i]>='A'&&chStr[i]<='Z'))
			count1++;
		else if(chStr[i]>='0'&&chStr[i]<='9')
			count2++;
		else if(chStr[i]==' ')
			count3++;
		else count4++;
	}
	cout<<"字符串:"<<chStr<<"中含:\n";
	cout<<"英文字母="<<count1<<",数字="<<count2<<"、空格="<<count3<<",其它字符="<<count4<<endl;
}
